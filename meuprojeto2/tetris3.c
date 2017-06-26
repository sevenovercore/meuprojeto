#include <time.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
//----------------------->> funcao que recebe do teclado a qualquer momento no programa...
//----------------------->> esta funcao deve ser usada juntamente com a funcao kbhit 
int vez=0,dif=1;
float tempoX = 0.3;
int getch()
{
    struct termios oldattr, newattr;

    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

//----------------------->> funcao que verifica se algo no teclado foi digitado 

int kbhit()
{
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
}

//----------------------->> essa funcao faz esperar "X" segundos passados no parametro da funcao 
//-- clock_t e uma funcao que pega o clock do processador e o divide ate ficar X(G,M)hz/segundos
//------ cada vez que essa funcao e chamara ela vem com o numero mais o anterior
//------- por isso que eu defini o fim como X segundos mais o clock por segundo do processador
//----assim  o clock() vai percorer do 1 segundo ate x seg definido do x por causa do clock do processador
//----- isso nao da um resultado 100% correto em relacao ao tempo mais se aproxima muito 


void esperar(int x){
		clock_t fim= clock() + x * CLOCKS_PER_SEC;
		while(clock() < fim);
}

//----------------------->> essa funcao imprimi a matriz do tetris 
void coraleatoria(){
	// cores do sistema linux----
	// 34 - cor azul
	// 31 - vermelho
	// 32 - verde
	// 33 - laranja
	// 35 - rosa
	// 36 - cyan
	// 37 - branco
	srand(time(NULL));
	int v=(rand()%7)+1;
	switch(v){
		case 1:
			printf("\033[31m██\033[0m");
			break;
		case 2:
			printf("\033[32m██\033[0m");
			break;
		case 3:
			printf("\033[33m██\033[0m");
			break;
		case 4:
			printf("\033[34m██\033[0m");
			break;
		case 5:
			printf("\033[35m██\033[0m");
			break;
		case 6:
			printf("\033[36m██\033[0m");
			break;
		case 7:
			printf("\033[37m██\033[0m");
			break;
	}
}
void imprimir(int x,int y,int matriz[x][y]){
	system("clear");
	
	for(int i =0;i<45;i++){
		for(int j =0;j<30;j++){
			if(matriz[i][j]==0)
				printf("  ");
			else
				coraleatoria();
				//printf("\033[40m██\033[0m");
		}
		printf("\n");
	}
	printf("\n\n\t\t\t\033[34mpontos - %i\033[0m",dif);
	
}

// ------------------------->> aqui comecam as pecas do tetris 

void peca1(int x, int y,int m[x][y]){
	int a=0;
	int b=0;
//---------------------------->> aqui a pessa comeca a ser imprimida
	for(int i =0;i<45;i++){
			if(b == 0){
				m[i][15+a]=0;
				m[i+1][15+a]=1;
				m[i+2][15+a]=1;
				m[i+3][15+a]=1;
				m[i+4][15+a]=1;
			}else{
				m[i-1][15+a+2]=0;
				m[i-1][15+a+1]=0;
				m[i-1][15+a]=0;
				m[i-1][15+a-1]=0;
				m[i][15+a+2]=1;
				m[i][15+a+1]=1;
				m[i][15+a]=1;
				m[i][15+a-1]=1;
			}
//----------------->> aqui sao as condicoes para mexer a peca 
		clock_t fim= clock() + tempoX * CLOCKS_PER_SEC;
		while(clock() < fim){
					
			if(kbhit()){
                	char ch;
                	ch = getch();
                	if (ch == 'l' && a > -15 && ((m[i+4][15+a+1] == 0 && b==0) && (m[i+3][15+a+1] == 0 && b==0) && (m[i+2][15+a+1] == 0 && b==0) && (m[i+1][15+a+1] == 0 && b==0))){
               			imprimir(45,30,m);
               			m[i+1][15+a]=0;
				m[i+2][15+a]=0;
				m[i+3][15+a]=0;
				m[i+4][15+a]=0;
               			a++;
               			
                	}
                	if (ch == 'k' && a < 14 && ((m[i+4][15+a-1] == 0 && b==0) && (m[i+3][15+a-1] == 0 && b==0) && (m[i+2][15+a-1] == 0 && b==0) && (m[i+1][15+a-1] == 0 && b==0))){
               			imprimir(45,30,m);
               			m[i+1][15+a]=0;
				m[i+2][15+a]=0;
				m[i+3][15+a]=0;
				m[i+4][15+a]=0;
               			a--;
              			
                	}
                	if (ch == 'l' && a < 11 && m[i+4][15+a+1] != 1 && m[i][15+a+3]==0 && b==1 ){
               			imprimir(45,30,m);
               			m[i][15+a+2]=0;
				m[i][15+a+1]=0;
				m[i][15+a]=0;
				m[i][15+a-1]=0;
               			a++;
               			
                	}
                	if (ch == 'k' && a > -13 && m[i+4][15+a-1] != 1 && m[i][15+a-2]==0 && b==1 ){
               			imprimir(45,30,m);
               			m[i][15+a+2]=0;
				m[i][15+a+1]=0;
				m[i][15+a]=0;
				m[i][15+a-1]=0;
               			a--;
              			
                	}
                	if (ch == 'a' && a < 14 && a > -15 && m[i+1][15+a-1] != 1 && m[i+1][15+a+2] != 1){
                		int v=0;
                		if(b == 0){
                			v=!v;
                			b=!b;
	                		m[i+1][15+a]=0;
							m[i+2][15+a]=0;
							m[i+3][15+a]=0;
							m[i+4][15+a]=0;
                		}if (v==0 && b == 1 && m[i+1][15+a]==0 && m[i+4][15+a]==0 && m[i+3][15+a]==0 && m[i+2][15+a]==0){
                			b=!b;
							m[i][15+a+2]=0;
							m[i][15+a+1]=0;
							m[i][15+a]=0;
							m[i][15+a-1]=0;
                		}
                			
               
                	}
                	if (ch == 's' && a < 14 && a > -15 && m[i+1][15+a-1] != 1 && m[i+1][15+a+2] != 1){
                		int v=0;
                		if(b == 0){
                			v=!v;
                			b=!b;
	                		m[i+1][15+a]=0;
							m[i+2][15+a]=0;
							m[i+3][15+a]=0;
							m[i+4][15+a]=0;
                		}if (v==0 && b == 1 && m[i+1][15+a]==0 && m[i+4][15+a]==0 && m[i+3][15+a]==0 && m[i+2][15+a]==0){
                			b=!b;
							m[i][15+a+2]=0;
							m[i][15+a+1]=0;
							m[i][15+a]=0;
							m[i][15+a-1]=0;
                		}
                			
               
                	}
                	if(a == -15)
                		a++;
                	if(a ==  14)
                		a--;	
			}
		}	
// ------------------->> nesse momento eu imprimo o tetris	
		imprimir(45,30,m);

// -------------------->> aqui sao as condicoes de parada para a 1 peca
		if(m[i+5][15+a]==1 && b == 0){
			m[i+1][15+a]=1;
			m[i+2][15+a]=1;
			m[i+3][15+a]=1;
			m[i+4][15+a]=1;
			break;
		}if((m[i+1][15+a]==1 && b == 1) || (m[i+1][15+a-1]==1 && b == 1) || (m[i+1][15+a+1]==1 && b == 1) || (m[i+1][15+a+2]==1 && b == 1)){
			m[i][15+a+2]=1;
			m[i][15+a+1]=1;
			m[i][15+a]=1;
			m[i][15+a-1]=1;
			break;
		}	
	}
}

void peca2(int x, int y,int m[x][y]){
	int a=0;
	int b=1;
	for(int i =0;i<45;i++){
	
		//--------------------------->> aqui e  lugar onde a peca2 e impressa
		
		if(b==0){
			if(i > 0){
				m[i-1][15+a]=0;
				m[i][15+a+1]=0;
			}
			m[i][15+a]=1;
			m[i+1][15+a]=1;
			m[i+1][15+a+1]=1;
			m[i+2][15+a+1]=1;
			
		}
		
		if(b==1){
			if(i > 0){
				m[i-1][15+a+2]=0;
				m[i-1][15+a+1]=0;
				m[i][15+a]=0;
				m[i][15+a+1]=0;
			}
			m[i][15+a+2]=1;
			m[i][15+a+1]=1;
			m[i+1][15+a]=1;
			m[i+1][15+a+1]=1;
			
		}
		
		//--------------------------->> condicoes de movimento 
		
		clock_t fim= clock() + tempoX * CLOCKS_PER_SEC;
		while(clock() < fim){
			if(kbhit()){
                	char ch;
                	ch = getch();
                	if(ch == 'l' && b == 0 && a < 12 && m[i][15+a+1] == 0 && m[i+1][15+a+2]==0 && m[i+2][15+a+2]==0){
                		m[i][15+a]=0;
                		m[i+1][15+a]=0;
                		m[i+1][15+a+1]=0;
                		m[i+2][15+a+1]=0;
                		a++;
                	}
                	if(ch == 'k' && b == 0 && a > -14 && m[i][15+a-1] == 0 && m[i+1][15+a-1]==0 && m[i+2][15+a]==0){
                		m[i][15+a]=0;
                		m[i+1][15+a]=0;
                		m[i+1][15+a+1]=0;
                		m[i+2][15+a+1]=0;
                		a--;
                	}
                	if(ch == 'l' && b == 1 && a < 11 && m[i][15+a+3]==0 && m[i+1][15+a+2]==0){
                		m[i][15+a+2]=0;
						m[i][15+a+1]=0;
						m[i+1][15+a]=0;
						m[i+1][15+a+1]=0;
                		a++;
                	}
                	if(ch == 'k' && b == 1 && a > -14 && m[i][15+a]==0 && m[i+1][15+a-1]==0){
                		m[i][15+a+2]=0;
						m[i][15+a+1]=0;
						m[i+1][15+a]=0;
						m[i+1][15+a+1]=0;
                		a--;
                	}
                	if(ch == 'a' && a <12 && m[i+3][15+a]==0 && m[i+2][15+a]==0 && m[i+2][15+a+2]== 0){
              			int v=0;
                		if(b==0 && m[i][15+a+2]==0){
                			m[i][15+a]=0;
	                		m[i+1][15+a]=0;
	                		m[i+1][15+a+1]=0;
	                		m[i+2][15+a+1]=0;
                			b=!b;
                			v=1;
                		}
                		if(b==1 && v==0){
                			m[i][15+a+2]=0;
							m[i][15+a+1]=0;
							m[i+1][15+a]=0;
							m[i+1][15+a+1]=0;
                			b=!b;	
                		}
                		
                	}
                	if(ch == 's' && a <12 && m[i+3][15+a]==0 && m[i+2][15+a]==0 && m[i+2][15+a+2]== 0){
              			int v=0;
                		if(b==0 && m[i][15+a+2]==0){
                			m[i][15+a]=0;
	                		m[i+1][15+a]=0;
	                		m[i+1][15+a+1]=0;
	                		m[i+2][15+a+1]=0;
                			b=!b;
                			v=1;
                		}
                		if(b==1 && v==0){
                			m[i][15+a+2]=0;
							m[i][15+a+1]=0;
							m[i+1][15+a]=0;
							m[i+1][15+a+1]=0;
                			b=!b;	
                		}
                		
                	}
            }

		}
		
		//--------------------------->> impressao da tela 
		
		imprimir(45,30,m);
		
		//--------------------------->> condicoes de parada
		
		
		if((m[i+2][15+a]==1 || m[i+3][15+a+1]==1) && b==0){
			m[i][15+a]=1;
			m[i+1][15+a]=1;
			m[i+1][15+a+1]=1;
			m[i+2][15+a+1]=1;
			break;	
		}
		
		if((m[i+1][15+a+2]==1 || m[i+2][15+a]==1 || m[i+2][15+a+1]) && b==1){
			m[i][15+a+2]=1;
			m[i][15+a+1]=1;
			m[i+1][15+a]=1;
			m[i+1][15+a+1]=1;
			break;
		}
	}	
}

//---------------------->> o jogo é feio em uma matriz 45 x 30 e cada valor da matriz ou é 0 ou 1
//---------------------->> se o valor for 0 entao ele nao sera impresso nada e se for 1 sera equivalente a um bloco

void peca3(int x,int y,int m[x][y]){
	int a=0;
	for(int i=0;i<45;i++){
		//----------------para imprimir a peca
			if(i>0){
				m[i-1][15+a]=0;
				m[i-1][15+a+1]=0;	
			}
			m[i][15+a]=1;
			m[i][15+a+1]=1;	
			m[i+1][15+a]=1;
			m[i+1][15+a+1]=1;
	
	// ---------------------- condicoes para movimento.
		clock_t fim= clock() + tempoX * CLOCKS_PER_SEC;
		while(clock() < fim){
			if(kbhit()){
	                	char ch;
	                	ch = getch();
	                	if(ch == 'l' && m[i][15+a+2]==0 && m[i+1][15+a+2]==0){
	                		m[i][15+a]=0;
							m[i][15+a+1]=0;	
							m[i+1][15+a]=0;
							m[i+1][15+a+1]=0;
	                		a++;
	                	}
	                	if(ch == 'k' && m[i][15+a-1]==0 && m[i+1][15+a-1]==0){
	                		m[i][15+a]=0;
							m[i][15+a+1]=0;	
							m[i+1][15+a]=0;
							m[i+1][15+a+1]=0;
	                		a--;
	                	}
	        }
		}
		imprimir(45,30,m);

	//--------------------------->> condicoes de parada
		if (m[i+2][15+a]==1 || m[i+2][15+a+1]==1)
		{
			m[i][15+a]=1;
			m[i][15+a+1]=1;	
			m[i+1][15+a]=1;
			m[i+1][15+a+1]=1;	
			break;
		}
	}
}

void peca4(int x,int y,int m[x][y]){
	int a=0;
	for(int i=0;i<45;i++){
		m[i][15+a]=0;
		m[i+1][15+a]=1;
//---------------------------- onde a peca e gerada


//----------------------------- aqui e onde comaca a passar cada tempo
		clock_t fim= clock() + tempoX+tempoX * CLOCKS_PER_SEC;
		while(clock() < fim){
// -------------------------- aqui sao as opcoes de movimento da peca 
			if(kbhit()){
				char ch;
	            ch = getch();
	            if(ch == 'l' && m[i+1][15+a+1]==0){
	                	m[i+1][15+a]=0;	
	               		a++;
	          	}
	            if(ch == 'k' && m[i+1][15+a-1]==0){
	                	m[i+1][15+a]=0;	
	              		a--;
               	}
               	if(ch == 'j'){
               			int j;
               			for(j=45;m[j][15+a]!=0;j--){
               
               			}
               			m[j][15+a]=1;
               	}
			}

//---------------------------- condicoes de parada 
		
		}
		imprimir(45,30,m);

//------------------------------ momento da impressao
		if(m[i+2][15+a]==1){
			m[i+1][15+a]=1;
			break;
		}
	}
}

void peca5(int x,int y,int m[x][y]){
	int a=0;
	int b=0;

		for(int i=0;i<45;i++){
	// ----------------->>>>> momento em que esperasse do teclado um botão
			if(b==0){
				if(i>0){
					m[i+2][15+a]=0;
					m[i+3][15+a]=0;
					m[i+4][15+a]=0;
					m[i+4][15+a+1]=0;	
				}
				m[i+3][15+a]=1;
				m[i+4][15+a]=1;
				m[i+5][15+a]=1;
				m[i+5][15+a+1]=1;
			}
			if(b==1){
				if(i>0){
					m[i][15+a]=0;
					m[i][15+a+1]=0;
					m[i][15+a+2]=0;
					m[i-1][15+a+2]=0;
				}
				m[i+1][15+a]=1;
				m[i+1][15+a+1]=1;
				m[i+1][15+a+2]=1;
				m[i][15+a+2]=1;
			}

	// ------------------->>>> condicoes para mexer para os lados 

			clock_t fim= clock() + tempoX * CLOCKS_PER_SEC;
			while(clock() < fim){

				if(kbhit()){
					char ch;
		            ch = getch();
					if(ch == 'l' && b==0 && (m[i+4][15+a+2]==0 && m[i+3][15+a+1]==0 && m[i+2][15+a+1]==0)){
						m[i+3][15+a]=0;
						m[i+4][15+a]=0;
						m[i+5][15+a]=0;
						m[i+5][15+a+1]=0;
						a++;
					}
					if(ch == 'k' && b==0 && (m[i+2][15+a-1]==0 && m[i+3][15+a-1]==0 && m[i+4][15+a-1]==0)){
						m[i+3][15+a]=0;
						m[i+4][15+a]=0;
						m[i+5][15+a]=0;
						m[i+5][15+a+1]=0;
						a--;
					}
					if(ch == 'l' && b==1 &&(m[i+1][15+a+3]==0 && m[i][15+a+3]==0)){
						m[i+1][15+a]=0;
						m[i+1][15+a+1]=0;
						m[i+1][15+a+2]=0;
						m[i][15+a+2]=0;
						a++;
					}
					if(ch == 'k' && b==1 &&(m[i+1][15+a-1]==0 && m[i][15+a+1]==0 )){
						m[i+1][15+a]=0;
						m[i+1][15+a+1]=0;
						m[i+1][15+a+2]=0;
						m[i][15+a+2]=0;
						a--;
					}
					if(ch == 'a'){
							int k=0;
						if(b==0 && m[i+2][15+a]==0 && m[i+2][15+a+1]==0 && m[i+2][15+a+2]==0 && m[i+1][15+a+2]==0){
							k=1;
							m[i+3][15+a]=0;
							m[i+4][15+a]=0;
							m[i+5][15+a]=0;
							m[i+5][15+a+1]=0;
							b=!b;
						}
						if(b==1 && k==0 && m[i+3][15+a]==0 && m[i+4][15+a]==0 && m[i+5][15+a]==0 && m[i+5][15+a+1]==0){
							m[i+1][15+a]=0;
							m[i+1][15+a+1]=0;
							m[i+1][15+a+2]=0;
							m[i][15+a+2]=0;
							b=!b;
						}
					}
				}
			}
	// ----------------->>> momento que a matriz é impressa 

			imprimir(45,30,m);
			
	// -------------- >> condicoes de parada 

			if(b==0 && (m[i+6][15+a]==1 || m[i+6][15+a+1]==1  )){
				m[i+3][15+a]=1;
				m[i+4][15+a]=1;
				m[i+5][15+a]=1;
				m[i+5][15+a+1]=1;
				break;
			}
			if(b==1 && (m[i+2][15+a]==1 || m[i+2][15+a+1]==1 || m[i+2][15+a+2]==1 )){
				m[i+1][15+a]=1;
				m[i+1][15+a+1]=1;
				m[i+1][15+a+2]=1;
				m[i][15+a+2]=1;
				break;
			}	
		}
}
void jogar(){
	int matriz[45][30];

	void aleatorio(){
		srand(time(NULL));
		int k=1+rand()%5;
		switch(k){
			case 1:
				peca1(45,30,matriz);
				break;
			case 2:
				peca2(45,30,matriz);
				break;
			case 3:
				peca3(45,30,matriz);
				break;
			case 4:
				peca4(45,30,matriz);
				break;
			case 5:
				peca5(45,30,matriz);
				break;
		}
	}
	
	
	for(int i =0;i<45;i++){
		for(int j =0;j<30;j++){
			matriz[i][j]=0;
			if(i == 44)
				matriz[i][j]=1;
			if(j == 0 || j == 29)
				matriz[i][j]=1;
		}
	}

// -------------------------->> essa parte da funcao serve para verificar se o usuario perdeu e se sim voltar ao menu


	int soma=0,cout=1;
	while(cout){
		aleatorio();
		for(int i =0;i<44;i++){
			int p=0;
			int soma=0;
			for(int j =1;j<29;j++){
				soma += matriz[i][j];
			}
			if (soma == 28){
				dif+=5;
				p=i;
				for(int j=1;j<29;j++){
					matriz[i][j]=0;
				}
				for(int j=43;j>0;j--){
					for(int k=1;k<29;k++){
						if(matriz[j][k]==0 && matriz[j-1][k]==1){
							matriz[j][k]=1;
							matriz[j-1][k]=0;
						}
					}
					
				}
				for(int j=1;j<29;j++){

				}
			}
		}
		
		if(dif >= 30 && vez==0){
			tempoX -= 0.1;
			vez=1;
		}
		if(dif >= 80 && vez==1){
			tempoX -= 0.1;
			vez=2;
		}
		if(dif >= 250 && vez==2){
			tempoX -= 0.03;
			vez=3;
		}
		if(dif >= 250 && vez==3){
			tempoX -= 0.02;
			vez=4;
		}
		if(dif >= 550 && vez==4){
			tempoX -= 0.02;
			vez=5;
		}


		
		for(int i =1;i<29;i++){
			if(matriz[11][i]==1){
				printf("voce perdeu.\n");
				esperar(5);
				cout=0;
				break;
			}
			
		}
	}
	
}


