#include<time.h>
#include<string.h>
#include"tetris3.c"


void menu(){
printf("\t\t\t\t\t     ▄▄▄▄███▄▄▄▄      ▄████████ ███▄▄▄▄   ███    █▄  \n");
printf("\t\t\t\t\t   ▄██▀▀▀███▀▀▀██▄   ███    ███ ███▀▀▀██▄ ███    ███ \n");
printf("\t\t\t\t\t   ███   ███   ███   ███    █▀  ███   ███ ███    ███ \n");
printf("\t\t\t\t\t   ███   ███   ███  ▄███▄▄▄     ███   ███ ███    ███ \n");
printf("\t\t\t\t\t   ███   ███   ███ ▀▀███▀▀▀     ███   ███ ███    ███ \n");
printf("\t\t\t\t\t   ███   ███   ███   ███    █▄  ███   ███ ███    ███ \n");
printf("\t\t\t\t\t   ███   ███   ███   ███    ███ ███   ███ ███    ███ \n");
printf("\t\t\t\t\t    ▀█   ███   █▀    ██████████  ▀█   █▀  ████████▀  \n");
printf("\t    _____                 __                          \n");
printf("\t   | _   |    ______     |__.-----.-----.---.-.----.  \n");
printf("\t   |.|   |   |______|    |  |  _  |  _  |  _  |   _|	\n");
printf("\t   `-|.  |               |  |_____|___  |___._|__|  	\n");
printf("\t     |:  |              |___|     |_____|           	\n");
printf("\t     |::.|                                          	\n");
printf("\t     `---'                                            \n");                                                  
printf("\t    _______                                 __    	\n");
printf("\t   |       |    ______    .----.---.-.-----|  |--.	\n");
printf("\t   |___|   |   |______|   |   _|  _  |     |    < 	\n");
printf("\t    |  ___/               |__| |___._|__|__|__|__|	\n");
printf("\t   |:      |                                       	\n");
printf("\t   |::.. . |                                      	\n");
printf("\t   `-------'                                      	\n");
printf("\t    _______                __         __              __       __  \n");
printf("\t   |   _   |    ______    |  |_.--.--|  |_.-----.----|__.---.-|  | \n");
printf("\t   |___|   |   |______|   |   _|  |  |   _|  _  |   _|  |  _  |  | \n");
printf("\t    _(__   |              |____|_____|____|_____|__| |__|___._|__| \n");
printf("\t   |:  1   |                                                       \n");
printf("\t   |::.. . |                                                       \n");
printf("\t   `-------'                                                       \n");
printf("\t    ___ ___                                                            \n");
printf("\t   |   Y   |    ______    .----.---.-.----.----.-----.-----.---.-.----. \n");
printf("\t   |   |   |   |______|   |  __|  _  |   _|   _|  -__|  _  |  _  |   _| \n");
printf("\t   |____   |              |____|___._|__| |__| |_____|___  |___._|__|   \n");
printf("\t       |:  |                                         |_____|            \n");
printf("\t       |::.|                                                           \n");
printf("\t       `---'                                                           \n");
printf("\t    _______                            __      \n");
printf("\t   |   _   |    ______    .-----.---.-|__.----. \n");
printf("\t   |   1___|   |______|   |__ --|  _  |  |   _| \n");
printf("\t   |____   |              |_____|___._|__|__|   \n");
printf("\t   |:  1   |                                   \n");
printf("\t   |::.. . |                                    \n");
printf("\t   `-------'                                    \n");                                                                                                             
}

void tutorial(){
printf("\t\t\t\t\t\t  ________________________________________________________ \n");
printf("\t\t\t\t\t\t |         __         __              __       __         |\n");
printf("\t\t\t\t\t\t |        |  |_.--.--|  |_.-----.----|__.---.-|  |        |\n");
printf("\t\t\t\t\t\t |        |   _|  |  |   _|  _  |   _|  |  _  |  |        |\n");
printf("\t\t\t\t\t\t |        |____|_____|____|_____|__| |__|___._|__|        |\n");
printf("\t\t\t\t\t\t |________________________________________________________| \n");
printf("\n\n");
printf(" \t\t\t __________________________________________________________________________________________________\n");
printf(" \t\t\t|-------> Digite 'K' e 'L' para esquerda e direita respectivamente.                                |\n");
printf(" \t\t\t|-------> Digite 'A' e 'D' para mover para esquerda e direita respectivamente.                     |\n");
printf(" \t\t\t|-------> Digite 'J' para usar o poder especial de algumas pecas...                                |\n");
printf(" \t\t\t|-------> as pecas com poderes espciais sao a bomba (V) e o ponto (.) que aumenta                  |\n");
printf(" \t\t\t|-------> Se os objetos chegarem ao topo do quadrado voce perde.                                   |\n");
printf(" \t\t\t|__________________________________________________________________________________________________|\n");
esperar(20);
}

void emenu(){
	char escolha;
	while(1){
		menu();
		escolha = getchar();
		switch(escolha){
			case '1':
				jogar();
			break;
			case '2':
				//rank();
			break;
			case '3':
				tutorial();
			break;
			case '4':
				//carregar();
			break;
			case '5':
				exit(0);
			break;
			default:
				system("clear");
			break;
		}
	}
}