#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){

    int opc,fig,pergunta,sairdosubmenu = 0;

while(true){
cout << "Escolha a opcao:\n";
cout << "\n 1- Aprender a calcular, \n 2- Calcular,\n 3- Calculos realizados,\n 4- Encerrar. "<< endl;
cin >> opc;
system ("cls");
if(opc == 4)
return 0;

	if (opc==1){
		do{
		system("cls");
		cout << "\t Area é a denominacao dada a medida de uma superficie.\n";
		cout << "\t Escolha uma das opções abaixo para aprender a calcular a area.\n";
		cout << "\n 1- Triangulo\n 2- Paralelogramo\n 3- Losango\n 4- Quadrado\n 5- Retangulo\n 6-Circulo\n 7-Voltar ao Inicio 8-Encerrar\n";
		cin >> fig;
		
		switch (fig){
		case 1:
			system ("cls");
			cout << "funcao executada " << endl;
			cout<< " \t\t \nDeseja sair 1=Sim 2-Nao\n";
			cin >> pergunta;
			system("cls");
			break;
		case 2:
			system ("cls");
			cout << "funcao executada " << endl;
			cout<< " \t\t \nDeseja sair 1=Sim 2-Nao\n";
			cin >> pergunta;
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "funcao executada " << endl;
			cout<< " \t\t \nDeseja sair 1=Sim 2-Nao\n";
			cin >> pergunta;
			system("cls");
			break;
		case 4:
			system("cls");
			cout << "funcao executada " << endl;
			cout<< " \t\t \nDeseja sair 1=Sim 2-Nao\n";
			cin >> pergunta;
			system("cls");
			break;
		case 5:
			system("cls");
			cout << "funcao executada " << endl;
			cout<< " \t\t \nDeseja sair 1=Sim 2-Nao\n";
			cin >> pergunta;
			system("cls");
			break;
		case 6:
			system("cls");
			cout << "funcao executada " << endl;
			cout<< " \t\t \nDeseja sair 1=Sim 2-Nao\n";
			cin >> pergunta;
			system("cls");
			break;
		case 7: sairdosubmenu = 1; 
		break;
		}
		
		
		
		if(sairdosubmenu){
		    system("cls");
		    sairdosubmenu = 0;
		    break;
		}
		
		} while (pergunta!=1); 
}


}
return 0;
}
