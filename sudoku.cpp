#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sudoku2.cpp"
#include"sudoku3.cpp"
#include<string.h>

void retorno(int &i);

int main(){
	
	FILE* arquivo;
	
	//isso deixou de ser necessario por enquanto.
	//arquivo = fopen("sudoku.txt","rt");
	
	if((arquivo = fopen("sudoku.txt","rt")) == NULL){
		printf("error arquivo base do sudoku nao foi encontrado.\n\n");
		printf("gerando um arquivo base...\n");
		base();
		printf("base criada com sucesso\n");
	}
	
	//fclose(arquivo);
	
	char nome[20];
	printf("digite seu nome:  ");
	scanf("%s", nome);
	fflush(stdin);
	// essa parte do codigo vai servir para o rank de jogadores  
	
	char a[10];
	srand(time(NULL));
	int f[6][6],m[9][9],d[12][12],colocar[9][9];
	//char sudok[10]="sudokuf";
	//sudok[7]=rand()%25;
	int cont;
	entrada();
	menu();
	int v = escolha();
	while(v !=  5){
		if(v == 4){
			printf("\n\n");
			creditos();
			retorno(v);
		}
		if(v == 2){
			printf("\n\n");
			tutorial();
			retorno(v);
		}
		if(v == 1){
			printf("\n\n");
			dificuldades();
			//aqui vao ser esolhidas as dificuldades
			int v2 = escolha2();
			if (v2 == 0){
				menu();
				v=escolha();
			}
			if (v2 == 1){
			// falta o banco de dados de athirson exatamente aqui ...
				arquivo = fopen("sudoku.txt","rt");
					fscanf(arquivo,"%s\n",&a);
					for(int i=0;i<6;i++){
						for(int j=0;j<6;j++){
							fscanf(arquivo,"%i ",&f[i][j]);
						}
					}
					while(strcmp(a,"sudoku1")!=0){
						fscanf(arquivo,"%s\n",&a);
						for(int i=0;i<6;i++){
							for(int j=0;j<6;j++){
								fscanf(arquivo,"%i ",&f[i][j]);
							}
						}
					}	
			}
			if (v2 == 2 || v2 == 3 || v2 == 3 || v2 == 5){
				//char sudok[10]="sudoku";
				//sudok[6]=rand()%25;
				arquivo = fopen("sudoku.txt","rt");
					fscanf(arquivo,"%s\n",&a);
					for(int i=0;i<9;i++){
						for(int j=0;j<9;j++){
							fscanf(arquivo,"%i ",&m[i][j]);
						}
					}
					while(strcmp(a,"sudoku2")!=0){
						fscanf(arquivo,"%s\n",&a);
						for(int i=0;i<9;i++){
							for(int j=0;j<9;j++){
								fscanf(arquivo,"%i ",&m[i][j]);
							}
						}
					}
				layout();
					
			}
		}
		if(v == 3){
			FILE* arquivo2;
			if((arquivo2 = fopen("rank.txt","rt")) == NULL){
				printf("crianco arquivo de rank...\n");
				arquivo2 = fopen("rank.txt","wt");
				fprintf(arquivo2,"%s 0\n",nome);
				fclose(arquivo2);
				menu();
				v=escolha();
			}else{
				arquivo2 = fopen("rank.txt","rt");
				char listar[20];
				int pontuacao;
				printf("\n\n");
				printf("___________________________\n");
				while(!feof(arquivo2)){
					fscanf(arquivo2,"%s %i\n",&listar,&pontuacao);
					printf("│%s - %i",listar,pontuacao);
					if (pontuacao < 10)
						for(int i=0;i<22-(strlen(listar)+1);i++)
							printf(" ");
					if (pontuacao >= 10 && pontuacao < 100)
						for(int i=0;i<22-(strlen(listar)+2);i++)
							printf(" ");
					if (pontuacao >= 100 && pontuacao < 1000)
						for(int i=0;i<22-(strlen(listar)+3);i++)
							printf(" ");
					printf("│\n");
				}
				printf("---------------------------\n");
				fclose(arquivo2);
				retorno(v);
			}	
			
	
				
		}
	}
	
	// isso é para o sudoku medio,dificil e rapaz 
	/*
	arquivo = fopen("sudoku.txt","rt");
		fscanf(arquivo,"%s\n",&a);
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
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
	*/	
	return 0;
}

void retorno(int &i){
	int k=-1;
	printf("\n\t Deseja voltar ao menu:\n\t\t\t\t 0 - para sim:  ");
	scanf("%i",&k);
	while(k != 0){
		printf("\tdeixe de tentar bugar o jogo... ¬_¬\n");
		printf("\tdigite 0 para voltar ao menu:  ");
		scanf("%i",&k);
	}
	menu();
	i = escolha();
}


