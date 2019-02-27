#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()

int main(void)
{
int i;
float res;
float max = 15.9;
float min = 0.1;

printf("Gerando 10 valores aleatorios:\n\n");

/* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
com o valor da função time(NULL). Este por sua vez, é calculado
como sendo o total de segundos passados desde 1 de janeiro de 1970
até a data atual.
Desta forma, a cada execução o valor da "semente" será diferente.
*/
srand(time(NULL));



// gerando valores aleatórios na faixa de 0 a 100
printf("%d \n", rand() %100);

res = min + rand() * (max - min) / RAND_MAX;
printf ("%.2f",res);

getch();
return 0;
}
