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
		for(int j =0;j<9;j++){
			printf(" ┌─┐ ");
			if(j == 2 || j == 5)
				printf("│");
		}
		printf("\n");
		for(int j =0;j<9;j++){
			if(m[i][j] != 0)
				printf(" │%i│ ",m[i][j]);
			else
				printf(" │ │ ");
			if(j == 2 || j == 5)
				printf("│");
		}
		printf("\n");
		for(int j =0;j<9;j++){
			printf(" └─┘ ");
			if(j == 2 || j == 5)
				printf("│");
		}
		if (i == 2 || i == 5)
			printf("\n");
			
		if (i == 2 || i == 5){
			for(int j =0;j<8;j++){
			printf("──────");
			}
		}
		printf("\n");
	}
	
	
}
void jogar(int d){
	char a[10];
	srand(time(NULL));
	int m[9][9],m2[9][9];
	int cont=0,vetor[d];
	for(int i =0;i<40;i++){
		vetor[i]=rand()%81;
	}
	FILE* arquivo;
	arquivo = fopen("sudoku.txt","rt");
		fscanf(arquivo,"%s\n",&a);
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				m2[i][j]=0;
				fscanf(arquivo,"%i ",&m[i][j]);
			}
		}
		while(strcmp(a,"sudoku1")!=0){
			fscanf(arquivo,"%s\n",&a);
			for(int i=0;i<9;i++){
				for(int j=0;j<9;j++){
					fscanf(arquivo,"%i ",&m[i][j]);
				}
			}
		}
	int c,l;
	for(int i =0;i<d;i++){
		c = vetor[i]/9;
		l = vetor[i]%9;
		m2[c][l]=m[c][l];
	}
	while(1){
		system("clear");
		layout(9,9,m2);
		int p,o,u;
		int t;
		printf("digite 1 para entrar e 0 para desistir:  ");
		scanf("%i",&t);
		if (t == 1){
			printf("digite o valor da linha mas nao digite nenhuma letra pf:  ");
				scanf("%i",&p);
			while (p < 0 || p >8){
				printf("digite o valor da linha mas nao digite nenhuma letra pf:  ");
				scanf("%i",&p);
			}
			printf("digite o valor da coluna mas nao digite nenhuma letra pf:  ");
				scanf("%i",&o);
			while (o < 0 || o >8){
				printf("digite o valor da linha mas nao digite nenhuma letra pf:  ");
				scanf("%i",&o);
			}
			printf("digite o valor do numero mas nao digite nenhuma letra pf:  ");
				scanf("%i",&u);
			while (u < 0 || u >8){
				printf("digite o valor da linha mas nao digite nenhuma letra pf:  ");
				scanf("%i",&u);
			}
			m2[p][o]=u;
		}else{
			break;
		}
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
	FILE* arquivo2,arquivo3;
			if((arquivo2 = fopen("rank.txt","rt")) == NULL){
				printf("crianco arquivo de rank...\n");
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
				jogar(40);
				dificuldades();
				break;
			case '3':
				jogar(35);
				dificuldades();
				break;
			case '4':
				jogar(23);
				dificuldades();
				break;
			case '5':
				jogar(28);
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
// aqui tem o bug do tamanho de letras mas eu nao consegui resolver
	}while(s != '5');
}