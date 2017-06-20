#include<stdio.h>
#include<stdlib.h>
#include"sudoku2.c"
#include<string.h>


int main(){
	
	criarbase();
	
	char nome[20];
	printf("digite seu nome:  ");
	scanf("%s", nome);
	fflush(stdin);
	srand(time(NULL));
	
	menu1();
	
	
	// isso é para o sudoku medio,dificil e rapaz 
	
}
