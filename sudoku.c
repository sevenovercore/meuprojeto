#include<stdio.h>
#include<stdlib.h>
#include"sudoku2.c"
#include<string.h>


//void retorno(int &i);

int main(){
	criarbase();
	
	char nome[20];
	printf("digite seu nome:  ");
	scanf("%s", nome);
	fflush(stdin);
	char a[10];
	srand(time(NULL));
	
	menu1();
	
	
	// isso é para o sudoku medio,dificil e rapaz 
	
}
