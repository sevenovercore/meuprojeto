#include<stdio.h>
#include<stdlib.h>
//#include<time.h>
#include"sudoku2.c"
//#include"sudoku3.c"
#include<string.h>


//void retorno(int &i);

int main(){
	criarbase();
	//FILE* arquivo;
	
	//isso deixou de ser necessario por enquanto.
	//arquivo = fopen("sudoku.txt","rt");
	
	//if((arquivo = fopen("sudoku.txt","rt")) == NULL){
	//	printf("error arquivo base do sudoku nao foi encontrado.\n\n");
	//	printf("gerando um arquivo base...\n");
	//	base();
	//	printf("base criada com sucesso\n");
	//}
	
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
	int cont,v;
	menu1();
	
	
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


/*
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
*/

