#include <stdlib.h>
#include <stdio.h>

typedef struct  {
	int dano;
	int defesa;
}POKEBOLA;

POKEBOLA pokemon[2]; //GLOBAL, TODAS FUNCOES ENXERGAM

void preenche();

int main () {
	
	
	preenche ();
	printf ("dano 1 = %d\ndefesa 1 = %d\n dano 2 = %d\ndefesa 2 = %d\n",pokemon[0].dano,pokemon[0].defesa,pokemon[1].dano,pokemon[1].defesa);
	
	system ("Pause");
	return 0;
	
}

void preenche (){
	int i;
	for (i=0; i<2; i++){
		printf ("Digite o dano :");
		scanf ("%d",&pokemon[i].dano);
		printf ("Digite a defesa :");
		scanf ("%d",&pokemon[i].defesa);
	}
}
