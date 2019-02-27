#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>



//USAR RAND (20%+1)



typedef struct {
	char nome[50];
	int uso; //0 para livre e 1 para ocupado
}NOME;

main(){

	int i=0,t=0;
	NOME cand[7];
//	clrscr();

	//cadastrando os candidatos

	do {
		printf("\nDigite o nome do condidato:");
		scanf("%s",&cand[i].nome);
		cand[i].uso=0;
		i++;
	} while(i<7);

//sorteio

	printf("\n\n**-Os sorteados-**\n\n");

	do{
		i=rand()%7+1;
		if(cand[i].uso==0){
			t++;
			cand[i].uso=1;
			printf("\nCandidato: %s",cand[i].nome);
		}
	}while (t<2);

getch();

}
