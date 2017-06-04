#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sudoku2.cpp"
#include"sudoku3.cpp"
#include<string.h>

void retorno(int &i);

int main(){
	
	FILE* arquivo;
	arquivo = fopen("sudoku.txt","rt");
	
	if(arquivo == NULL){
		printf("error arquivo base do sudoku nao foi encontrado.\n\n");
		printf("gerando um arquivo base...\n");
		base();
		printf("base criada com sucesso\n");
	}
	
	char nome[50];
	char a[10];
	srand(time(NULL));
	int f[6][6],m[9][9],d[12][12];
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
	}
	
	// isso é para o sudoku medio,dificil e rapaz 
	
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
		
	return 0;
}

void retorno(int &i){
	int k=0;
	printf("\n\t Deseja voltar ao menu:\n\t\t\t\t 1 - para sim:  ");
	scanf("%i",&k);
	while(k != 1){
		printf("deixe de tentar bugar o jogo... ¬_¬\n");
		printf("digite 1 para voltar ao menu:  ");
		scanf("%i",&k);
	}
	menu();
	i = escolha();
}


