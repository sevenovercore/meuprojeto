#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void palavras();

void main(){
	srand(time(NULL));
	palavras();

}

void palavras(){
	char m [12][12];
	
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			m[i][j]='0';
		}
	}

	char v1[15] = "carro";
	char v2[15] = "bicicleta";
	char v3[15] = "moto";
	char v4[15] = "jato";
	char v5[15] = "helicoptero";
	
	for(int i=0;i<12;i++){
		m[0][6]='3';
		m[i+1][6]=v5[i];
	}

	for(int i=0;i<4;i++){
		m[6][4]='1';
		m[8][3]='1';
		m[6][5+i]=v3[i];
		m[8][4+i]=v4[i];
	}

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			if(m[i][j]=='1')
				printf(" ► ");
			if(m[i][j]=='3')
				printf(" ▼ ");
			if(m[i][j]=='0')
				printf(" - ");
			if(m[i][j]!='0' && m[i][j]!='1' && m[i][j]!='3')
				printf(" %c ",m[i][j]);
		}
		printf("\n");
	}
}
