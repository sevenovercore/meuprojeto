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
	printf("\t\t████████╗██╗   ██╗████████╗ ██████╗ ██████╗ ██╗ █████╗ ██╗ 	\n");    
	printf("\t\t╚══██╔══╝██║   ██║╚══██╔══╝██╔═══██╗██╔══██╗██║██╔══██╗██║      \n");
	printf("\t\t   ██║   ██║   ██║   ██║   ██║   ██║██████╔╝██║███████║██║     	\n");
	printf("\t\t   ██║   ██║   ██║   ██║   ██║   ██║██╔══██╗██║██╔══██║██║     	\n");
	printf("\t\t   ██║   ╚██████╔╝   ██║   ╚██████╔╝██║  ██║██║██║  ██║███████╗	\n");
	printf("\t\t   ╚═╝    ╚═════╝    ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝	\n");
                                                              
	printf("\n");
	
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
			printf(" │%i│ ",m[i][j]);
			if(j == 2 || j == 5)
				printf("│");
		}
		printf("\n");
		for(int j =0;j<9;j++){
			printf(" └─┘ ");
			if(j == 2 || j == 5)
				printf("│");
		}
		printf("\n");
		if (i == 2 || i == 5){
			for(int j =0;j<9;j++){
			printf("─────");
			}
		}
		printf("\n");
	}
/*
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t──────────── ───────────── ────────────\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t──────────── ───────────── ────────────\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
	printf("\t\t\t┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐ │ ┌─┐ ┌─┐ ┌─┐\n");
	printf("\t\t\t│ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │ │\n");
	printf("\t\t\t└─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘ │ └─┘ └─┘ └─┘\n");
*/
}
void jogar(){
	char a[10];
	srand(time(NULL));
	int m[9][9],m2[9][9];
	int cont=0,vetor[35];
	for(int i =0;i<35;i++){
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
	for(int i =0;i<35;i++){
		c = vetor[i]/9;
		l = vetor[i]%9;
		m2[c][l]=m[c][l];
	}
	
	layout(9,9,m2);	
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
				jogar();
				break;
			case '3':
				break;
			case '4':
				break;
			case '5':
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