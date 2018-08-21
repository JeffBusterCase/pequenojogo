#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

bool h = true, b = true;

void sprint(char* str, int mili){
	int _c;
	for(_c=0;str[_c]!='\0';_c++){
		Sleep(mili);
		printf("%c", str[_c]);
	}
}
void quebrouACadeira(char cadeira){
	getch();
	if(cadeira == 'h'){
		getch();
		if (rand()%100 <= 40){
			h = false;
			printf("\n < A cadeira quebrou! (h)>");
		}
	} else if(cadeira == 'b'){
		getch();
		if (rand()%100 <= 10){
			b = false;
			printf("\n < A cadeira quebrou! (b)>");
		}
	} else {

		getch();
		exit(0);
	}
}


void main()
{
	setlocale(LC_ALL, "portuguese");
	
	char cadeira;
	bool sentado = true;
	
	system("cls");
    sprint("\nEste é o jogo da cadeira!, Chege até a entrevista de emprego com pelo menos", 50);
    sprint(" uma cadeira em mãos\n",50);
    
    // Cadeira h -> 40% de chance de quebrar
    // Cadeira h -> Muito estável
    // Cadeira b -> 10% de chance de quebrar
    // Cadeira b -> muito molenga
    
    // Caso 1 -
    printf("\nCena 1");
    sprint("\nVocê está no trem, e não tem banco livre para sentar.",50);
    Sleep(250);
	sprint(" De repente, \n",50);
    sprint("através dos alto falantes, você ouve o condutor dizer:\n",50);
    srand(time(NULL));
    
    sprint("FAVOR USUÁRIOS SENTEM-SE,",100);
	Sleep(500);
	sprint(" IREMOS ENFRENTAR TURBULENCIA NO TREM!!!!!!!\n", 100);
    
    printf("Escolha sua cadeira: h ou b: ");
    fflush(stdin);
    scanf("%c", &cadeira);
    
    if(cadeira == 'h' && h){
    	quebrouACadeira(cadeira);
	} else if (cadeira == 'b' && b){
		if(rand()%100 <= 60){
			printf("\n A cadeira éra muito mole; você saiu voando!");
			sentado = false;
		}
	} else {
		exit(0);
	}
	
    if(sentado == false){
    	printf("\nAh! que pena, ficou em pé, da Ana Rosa até a Luz ;C");
    	exit(0);
	}
	
	printf("\nMuito esperto! :)");
	
	// Caso 2
	
	printf("\nCena 2");
	sprint("\n Saindo da estação, você chama um UBER.",50);
	sprint("\n Olhando o aplicativo, a descrição do carro diz: CARRO GRANDE",50);
	Sleep(150);
	sprint("\n Na parte inferior, está marcado a quantidade de likes e dislikes",50);
	Sleep(250);
	printf("\n - LIKES: 50 - DISLIKES: 404");
	getch();
	sprint("\n É o unico que consegue pagar, logo então faz a chamada",50);
	sprint("\n Quando o carro chega, você nota que é uma PICK-UP, e o carona está ocupado por",50);
	sprint(" um Hot Valley!",50);
	sprint("\nRápido selecione a cadeira! h ou b", 25);
	fflush(stdin);
    scanf("%c", &cadeira);
	
	
	
	
    getch();
}
