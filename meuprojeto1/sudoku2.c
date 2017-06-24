#include"sudoku3.c"
#include<time.h>
#include<string.h>

void entrada()
{                                                                 
	printf("\t\t██████╗ ███████╗███╗   ███╗      ██╗   ██╗██╗███╗   ██╗██████╗  ██████╗ \n");
	printf("\t\t██╔══██╗██╔════╝████╗ ████║      ██║   ██║██║████╗  ██║██╔══██╗██╔═══██╗\n");
	printf("\t\t██████╔╝█████╗  ██╔████╔██║█████╗██║   ██║██║██╔██╗ ██║██║  ██║██║   ██║\n");
	printf("\t\t██╔══██╗██╔══╝  ██║╚██╔╝██║╚════╝╚██╗ ██╔╝██║██║╚██╗██║██║  ██║██║   ██║\n");
	printf("\t\t██████╔╝███████╗██║ ╚═╝ ██║       ╚████╔╝ ██║██║ ╚████║██████╔╝╚██████╔╝\n");
	printf("\t\t╚═════╝ ╚══════╝╚═╝     ╚═╝        ╚═══╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝\n");
	printf("\n\n\n");
}




void menu(){
	printf("\t\t ╔═╗╔═╗╔═╗╔═╗╦  ╦ ╦╔═╗  ╦ ╦╔╦╗╔═╗  ╔╦╗╔═╗╔═╗  ╔═╗╔═╗╔═╗╔═╗╔═╗╔═╗  ╔═╗╔╗ ╔═╗╦═╗ ╦╔═╗\n");
	printf("\t\t ║╣ ╚═╗║  ║ ║║  ╠═╣╠═╣  ║ ║║║║╠═╣   ║║╠═╣╚═╗  ║ ║╠═╝║  ║ ║║╣ ╚═╗  ╠═╣╠╩╗╠═╣║╔╩╦╝║ ║\n");
	printf("\t\t ╚═╝╚═╝╚═╝╚═╝╩═╝╩ ╩╩ ╩  ╚═╝╩ ╩╩ ╩  ═╩╝╩ ╩╚═╝  ╚═╝╩  ╚═╝╚═╝╚═╝╚═╝  ╩ ╩╚═╝╩ ╩╩╩ ╚═╚═╝\n");
	printf("\n\n");
	printf("\t\t\t\t  ┬      ┌─┐┌─┐┬─┐┌─┐   ┬┌─┐┌─┐┌─┐┬─┐\n");
	printf("\t\t\t\t  │ ───  ├─┘├─┤├┬┘├─┤   ││ ││ ┬├─┤├┬┘\n");
	printf("\t\t\t\t  ┴      ┴  ┴ ┴┴└─┴ ┴  └┘└─┘└─┘┴ ┴┴└─ \n");
	printf("\t\t\t\t ──┐     ┌─┐┌─┐┬─┐┌─┐  ┌┬┐┬ ┬┌┬┐┌─┐┬─┐┬┌─┐┬  \n");  
	printf("\t\t\t\t ┌─┘───  ├─┘├─┤├┬┘├─┤   │ │ │ │ │ │├┬┘│├─┤│  \n");
	printf("\t\t\t\t └──     ┴  ┴ ┴┴└─┴ ┴   ┴ └─┘ ┴ └─┘┴└─┴┴ ┴┴─┘\n");
	printf("\t\t\t\t ──┐     ┬─┐┌─┐┌┐┌┬┌─\n");
	printf("\t\t\t\t ──┤───  ├┬┘├─┤│││├┴┐\n");
	printf("\t\t\t\t ──┘     ┴└─┴ ┴┘└┘┴ ┴\n");
	printf("\t\t\t\t│  │     ┌─┐┬─┐┌─┐┌┬┐┬┌┬┐┌─┐┌─┐\n");
	printf("\t\t\t\t└──┤───  │  ├┬┘├┤  │││ │ │ │└─┐\n");
	printf("\t\t\t\t   │     └─┘┴└─└─┘─┴┘┴ ┴ └─┘└─┘\n");
	printf("\t\t\t\t┌───     ┌─┐┌─┐┬┬─┐\n");
	printf("\t\t\t\t└──┐───  └─┐├─┤│├┬┘\n");
	printf("\t\t\t\t───┘     └─┘┴ ┴┴┴└─\n");
}

void dificuldades(){
	printf("\t\t  ╔═╗╔═╗╔═╗╔═╗╦  ╦ ╦╔═╗  ╔═╗  ╔╦╗╦╔═╗╦╔═╗╦ ╦╦  ╔╦╗╔═╗╔╦╗╔═╗\n");
	printf("\t\t  ║╣ ╚═╗║  ║ ║║  ╠═╣╠═╣  ╠═╣   ║║║╠╣ ║║  ║ ║║   ║║╠═╣ ║║║╣ \n");
	printf("\t\t  ╚═╝╚═╝╚═╝╚═╝╩═╝╩ ╩╩ ╩  ╩ ╩  ═╩╝╩╚  ╩╚═╝╚═╝╩═╝═╩╝╩ ╩═╩╝╚═╝\n");
	printf("\n\n");
	printf("\t\t\t\t  ┬     ┌┬┐┌─┐  ┌─┐┬  ┬ ┬┌─┐  ┌─┐┌─┐┌─┐┬ ┬┌─┐┌┬┐┌─┐\n");
	printf("\t\t\t\t  │ ───  ││├┤   │ ││  ├─┤│ │  ├┤ ├┤ │  ├─┤├─┤ │││ │\n");
	printf("\t\t\t\t  ┴     ─┴┘└─┘  └─┘┴─┘┴ ┴└─┘  └  └─┘└─┘┴ ┴┴ ┴─┴┘└─┘\n");
	printf("\t\t\t\t ──┐    ┌─┐┌─┐┌─┐┬┬ \n");  
	printf("\t\t\t\t ┌─┘─── ├┤ ├─┤│  ││ \n");
	printf("\t\t\t\t └──    └  ┴ ┴└─┘┴┴─┘\n");
	printf("\t\t\t\t ──┐    ┌┬┐┌─┐┌┬┐┬┌─┐\n");
	printf("\t\t\t\t ──┤─── │││├┤  ││││ │\n");
	printf("\t\t\t\t ──┘    ┴ ┴└─┘─┴┘┴└─┘\n");
	printf("\t\t\t\t│  │    ┌┬┐┬┌─┐┬┌─┐┬┬\n");
	printf("\t\t\t\t└──┤───  │││├┤ ││  ││\n");
	printf("\t\t\t\t   │    ─┴┘┴└  ┴└─┘┴┴─┘\n");
	printf("\t\t\t\t┌───    ┬─┐┌─┐┌─┐┌─┐┌─┐┌─┐┌─┐\n");
	printf("\t\t\t\t└──┐─── ├┬┘├─┤├─┘├─┤┌─┘┌─┘┌─┘\n");
	printf("\t\t\t\t───┘    ┴└─┴ ┴┴  ┴ ┴└─┘└─┘└─┘\n");
	printf("\t\t\t\t┌──┐    ┌─┐┌─┐┬─┐┌─┐  ┬  ┬┌─┐┬ ┌┬┐┌─┐┬─┐\n");  
	printf("\t\t\t\t│  │─── ├─┘├─┤├┬┘├─┤  └┐┌┘│ ││  │ ├─┤├┬┘\n");
	printf("\t\t\t\t└──┘    ┴  ┴ ┴┴└─┴ ┴   └┘ └─┘┴─┘┴ ┴ ┴┴└─\n");
	printf("\n\n");
}

void tutorial(){
	printf("\n");
	printf("\t\t████████╗██╗   ██╗████████╗ ██████╗ ██████╗ ██╗ █████╗ ██╗ 	\n");    
	printf("\t\t╚══██╔══╝██║   ██║╚══██╔══╝██╔═══██╗██╔══██╗██║██╔══██╗██║      \n");
	printf("\t\t   ██║   ██║   ██║   ██║   ██║   ██║██████╔╝██║███████║██║     	\n");
	printf("\t\t   ██║   ██║   ██║   ██║   ██║   ██║██╔══██╗██║██╔══██║██║     	\n");
	printf("\t\t   ██║   ╚██████╔╝   ██║   ╚██████╔╝██║  ██║██║██║  ██║███████╗	\n");
	printf("\t\t   ╚═╝    ╚═════╝    ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝	\n");
                                                              
	printf("\n");
	printf("\t\tAs dificuldades funcionam de forma aleatoria de acordo com um numero.\n\t\tentao as vezes a dificuldade facil pode ter menos numeros que a dificil mas a facil tem mais chances de ter mais numeros");
	printf("\n\n");
	printf("\t\t-----> tutorial para os niveis facil, medio, dificil e rapazzz: \n");
	printf("\t\t* - o sudoku e uma tabela que deve ser preenchida por numeros de 1 a 9\n");
	printf("\t\t* - o sudoku nao deve ter numeros repitidos na mesma linha e nem na mesma coluna\n");
	printf("\t\t* - o sudoku nao pode ter numeros repitidos dentro de um bloco 3x3\n");
	printf("\n\t\t------> para o nivel de olho fechado:\n");
	printf("\t\t* - as mesmas regras de um sudoku normal(algumas excessoes abaixo)\n");
	printf("\t\t* - aqui devese colocar numeros de 1 a 6 e os blocos devem ser de 1 a 6\n");
	printf("\n\t\t-------> para o nivel inferno\n");
	printf("\t\t...\n");
}

void creditos(){
	printf("\n\n");
	printf("\t\t\t\t███╗   ███╗ █████╗ ████████╗███████╗██╗   ██╗███████╗\n");
	printf("\t\t\t\t████╗ ████║██╔══██╗╚══██╔══╝██╔════╝██║   ██║██╔════╝\n");
	printf("\t\t\t\t██╔████╔██║███████║   ██║   █████╗  ██║   ██║███████╗\n");
	printf("\t\t\t\t██║╚██╔╝██║██╔══██║   ██║   ██╔══╝  ██║   ██║╚════██║\n");
	printf("\t\t\t\t██║ ╚═╝ ██║██║  ██║   ██║   ███████╗╚██████╔╝███████║\n");
	printf("\t\t\t\t╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝   ╚══════╝ ╚═════╝ ╚══════╝\n");
	printf("\n\n");
	printf("\t\t\t\t █████╗ ████████╗██╗  ██╗██╗██████╗ ███████╗ ██████╗ ███╗   ██╗\n");
	printf("\t\t\t\t██╔══██╗╚══██╔══╝██║  ██║██║██╔══██╗██╔════╝██╔═══██╗████╗  ██║\n");
	printf("\t\t\t\t███████║   ██║   ███████║██║██████╔╝███████╗██║   ██║██╔██╗ ██║\n");
	printf("\t\t\t\t██╔══██║   ██║   ██╔══██║██║██╔══██╗╚════██║██║   ██║██║╚██╗██║\n");
	printf("\t\t\t\t██║  ██║   ██║   ██║  ██║██║██║  ██║███████║╚██████╔╝██║ ╚████║\n");
	printf("\t\t\t\t╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝  ╚═══╝\n");
	printf("\n\n");
	printf("\t\t\t\t███████╗██████╗ ██╗███╗   ██╗ █████╗ ██████╗ ██████╗  ██████╗ \n");
	printf("\t\t\t\t██╔════╝██╔══██╗██║████╗  ██║██╔══██╗██╔══██╗██╔══██╗██╔═══██╗\n");
	printf("\t\t\t\t█████╗  ██║  ██║██║██╔██╗ ██║███████║██████╔╝██║  ██║██║   ██║\n");
	printf("\t\t\t\t██╔══╝  ██║  ██║██║██║╚██╗██║██╔══██║██╔══██╗██║  ██║██║   ██║\n");
	printf("\t\t\t\t███████╗██████╔╝██║██║ ╚████║██║  ██║██║  ██║██████╔╝╚██████╔╝\n");
	printf("\t\t\t\t╚══════╝╚═════╝ ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝  ╚═════╝\n");
}

void layout(int x,int y,int m[x][y]){
	system("clear");
	
	for(int i =0;i<9;i++){
		//printf("\n");
		for(int j=0;j<9;j++){
			if(j==3 || j == 6)
				printf(" ");
			if(i==0 || i == 3 || i == 6){
				if(j==0)
					printf(" _____  ");
				else
					printf("_____  ");
			}
		}
		printf("\n");
		for(int j=0;j<9;j++){
			if(j==3 || j == 6)
				printf(" ");
			printf("|     |");
		}
		printf("\n");
		for(int j=0;j<9;j++){
			if(j==3 || j == 6)
				printf(" ");
			if(m[i][j]==0)
				printf("|     |");	
			else
				printf("|  %i  |",m[i][j]);
		}
		printf("\n");
		for(int j=0;j<9;j++){
			if(j==3 || j == 6)
				printf(" ");
			printf("|_____|");
		}
		if(i==2 || i ==5)
			printf("\n");
	}
	printf("\n");
}

int ctoi(char i){
	switch(i){
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
	}
}
char itoc(int i){
	switch(i){
		case 0: return '0';
		case 1: return '1';
		case 2: return '2';
		case 3: return '3';
		case 4: return '4';
		case 5: return '5';
		case 6: return '6';
		case 7: return '7';
		case 8: return '8';
		case 9: return '9';
		default: return '1';
	}
}
char itoc2(int i){
	switch(i){
		case 1: return '1';
		case 2: return '2';
		default: return '1'; 
	}
}


void jogar(int d){
	srand(time(NULL));
	char sud[10]="sudoku";
	if((1+rand()%2)==1)
		sud[6]=itoc(1+rand()%8);
	else{
		sud[6]=itoc2(1+rand()%2);
		sud[7]=itoc(1+rand()%8);
	}
	int pontos=0;
	char a[10];
	int m[9][9],m2[9][9];
	int cont=0,vetor[d];
	for(int i =0;i<d;i++){
		vetor[i]=rand()%81;
	}
	FILE* arquivo;
	arquivo = fopen("sudoku.txt","rt");
		while(strcmp(a,sud)!=0){
			fscanf(arquivo,"%s\n",&a);
			for(int i=0;i<9;i++){
				for(int j=0;j<9;j++){
					m2[i][j]=0;
					fscanf(arquivo,"%i ",&m[i][j]);
				}
			}
		}
	fclose(arquivo);
	int c,l;
	for(int i =0;i<d;i++){
		c = vetor[i]/9;
		l = vetor[i]%9;
		m2[c][l]=m[c][l];
	}
	while(1){
		system("clear");
		layout(9,9,m2);
		char p,o,u;
		p = o = u ='0';
		int t;
		printf("digite 1 para entrar e qualquer outra tecla para desistir para desistir:  ");
		scanf("%i",&t);
		if (t != 0){
			printf("digite o valor da linha mas nao digite nenhuma letra pf:  ");
			while(p != '1' && p != '2' && p != '3' && p != '4' && p != '5' && p != '6' && p != '7' && p != '8' && p != '9'){	
				scanf("%c",&p);
			}
			printf("digite o valor da coluna mas nao digite nenhuma letra pf:  ");
			while(o != '1' && o != '2' && o != '3' && o != '4' && o != '5' && o != '6' && o != '7' && o != '8' && o != '9'){	
				scanf("%c",&o);
			}
			printf("digite o valor do numero mas nao digite nenhuma letra pf:  ");
			while(u != '1' && u != '2' && u != '3' && u != '4' && u != '5' && u != '6' && u != '7' && u != '8' && u != '9'){	
				scanf("%c",&u);
			}
		int p2=ctoi(p);
		int o2=ctoi(o);
		int u2=ctoi(u);
			m2[p2-1][o2-1]=u2;
		}else{
			break;
		}
	}
	int count=0;
	for(int i =0;i<9;i++){
		for(int j =0;j<9;j++){
			if (m[i][j]==m2[i][j])
				count++;	
		}
	}
	if(count == 81){
		printf("parabens voce ganhou.");
		pontos += 100-d;
	}else{
		printf("voce perdeu.");
	}
}
void criarbase(){
	FILE* arquivo;
	if((arquivo = fopen("sudoku.txt","rt")) == NULL){
		printf("error arquivo base do sudoku nao foi encontrado.\n\n");
		printf("gerando um arquivo base...\n");
		base();
		printf("base criada com sucesso\n");
	}
}

void rank(){
	FILE* arquivo2;
			if((arquivo2 = fopen("rank.txt","rt")) == NULL){
				printf("criando arquivo de rank...\n");
				arquivo2 = fopen("rank.txt","wt");
				fprintf(arquivo2,"nome %i\n",0);
				fclose(arquivo2);
			}else{
				arquivo2 = fopen("rank.txt","rt");
				char listar[20];
				int pontuacao;
				printf("\n\n");
				while(!feof(arquivo2)){
					fscanf(arquivo2,"%s %i\n",&listar,&pontuacao);
					printf("%s - %i\n",listar,pontuacao);
				}
				fclose(arquivo2);
			}	
}
void menudd(){
	char s='7';
	dificuldades();
	do{
		switch(s){
			case '1':
				break;
			case '2':
				jogar(60);
				dificuldades();
				break;
			case '3':
				jogar(45);
				dificuldades();
				break;
			case '4':
				jogar(29);
				dificuldades();
				break;
			case '5':
				jogar(20);
				dificuldades();
				break;
		}
		scanf("%c",&s);
	}while(s != '0');
}
void menu1(){
	entrada();
	menu();
	char s='0';
	do{
		switch(s){
			case '1':
				system("clear");
				menudd();
				system("clear");
				menu();
				break;
			case '2':
				system("clear");
				tutorial();
				menu();
				break;
			case '3':
				rank();
				menu();
				break;
			case '4':
				system("clear");
				creditos();
				int k=0;
				for(int i =0;i<1500000000;i++){
					k++;
				}
				system("clear");
				menu();
				break;
		}
		scanf("%c",&s);
	}while(s != '5');
}
