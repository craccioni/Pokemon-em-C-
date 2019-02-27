#include <stdlib.h>
#include <stdio.h>

void menu ();

void adicao ();
void subtracao();
void multiplicacao();
void divisao();
void sair();


int main (){
	
	menu();
	
	system ("pause");
	return 0;
}

void menu (){
	system ("cls");
	int opc;
	
	printf ("Escolha sua opcao: \n\n");
	printf ("1 - Adicao\n");
	printf ("2 - Subtracao\n");
	printf ("3 - Multiplicacao\n");
	printf ("4 - Divisao\n");
	printf ("5 - Sair\n");
	
	printf ("Digite a opcao: \n");
	scanf (" %d",&opc);
	
	switch (opc){
		case 1:
			adicao();
			break;
		case 2:
			subtracao();
			break;
		case 3:
			multiplicacao ();
			break;
		case 4: 
			divisao ();
			break;
		case 5:
			sair ();
			break;
		default:
			printf ("Opcao invalida! Selecione novamente.\n\n");
			system ("pause");
			menu();
	}
}

void adicao(){
	char opc;	
	printf ("Vc selecionou a adicao\n");	
	//adicionar a todos
	printf ("Dejesa continuar o programa? (s/n)\n");
	scanf (" %c",&opc);
	getchar();	
	if (opc == 's'){
		menu();
	} else {
		printf ("O programa sera finalizado.\n\n");
	}
	//add
}

void subtracao(){
	printf ("Vc selecionou a subtracao");
	menu();
}

void multiplicacao(){
	printf ("Vc selecionou a multiplicacao");
	menu();
}

void divisao (){
	printf ("Vc selecionou a divisao");
	menu();
}

void sair(){
	exit(1);
}








