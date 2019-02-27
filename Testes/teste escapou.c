#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	int prob;
	char captura;
	printf("Deseja tentar uma nova captura? s/n");
	scanf ("%s",&captura);
	
	if (captura == 's'){
		prob = rand() %10;
	if (prob == 1 || 4 || 8){
		printf ("O Pokémon escapou!");
		printf("\t\t\t 1. Nova Captura \n\t\t\t 2. Batalhar\n\t\t\t 3. Ajuda\n\t\t\t 4. Sair do Jogo\n\n");
		printf ("\t\t\t Opção: ");
		
		system("cls");
		getchar();	
	}
}
}

