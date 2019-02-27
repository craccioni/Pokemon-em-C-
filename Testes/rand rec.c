#include <stdio.h>

typedef struct{
	int dano;
	int defesa;
}POKEBOLA;


int main()
{
  int i;
	
	POKEBOLA pokemon [2];

  // Inicialização do gerador de números aleatórios.
  // Experimente o programa comentando a linha seguinte.
 // srand(time(0));
 
  // Escrita de 5 números aleatórios entre 1 e 50.
  for (i = 0; i < 5; i++) {
    printf("%d\n", rand() % 50 + 1);
  } 
  return 0;
} 
 
void recursiva (n, POKEBOLA *pokemon){
	
}
