#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome;
	int hp;
}POKEBOLA;


int main () {
	
	POKEBOLA pokemon [2];
	POKEBOLA *p;
	
	p = (POKEBOLA *)malloc(sizeof(POKEBOLA));
	

	
	if (!p){
		printf ("N�o conseguiu alocar");
		exit(1);
	}
	else{
		printf ("conseguiu");
	}
	
	free(p); //vai na posi��o do endere�o v e libera espa�o de memoria que foi alocado
	
	system ("Pause");
	return 0;
}
