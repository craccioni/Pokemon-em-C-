#include <stdio.h>
#include <stdlib.h>

//using namespace std;

int capturaPokemons ();

int main (){
	
	capturaPokemons();
	printf ("ola recursividade");
	
}


int capturaPokemons (){

	int a, b, c;
	char opcao3;
	printf ("Digite o valor de a: ");
	scanf ("%d",&a);	
	printf ("digite o valor de b: ");
	scanf ("%d",&b);
	c = a+b;
	printf ("o resultado de a + b e %d",c);	
	printf ("deseja realizar outro calculo? s/n");
	scanf ("%s",&opcao3);
	
	
	
	if (opcao3 == 's')
		capturaPokemons();
	else 
		return EXIT_SUCCESS;
		
}
