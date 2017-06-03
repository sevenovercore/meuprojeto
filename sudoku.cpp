#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sudoku2.cpp"
#include"sudoku3.cpp"
#include<string.h>

int main(){
	char a[10];
	int vet[10];
	srand(time(NULL));
	int m[9][9];
	int cont;
	entrada();
	menu();
	FILE* arquivo;
	arquivo = fopen("sudoku.txt","rt");
	
	if(arquivo == NULL){
		printf("error arquivo base do sudoku nao foi encontrado.\n\n");
		printf("gerando um arquivo base...\n");
		base();
		printf("base criada com sucesso\n");
	}
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
//	imprimir(p);
	return 0;
}
