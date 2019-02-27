#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int prob;
	
	prob = (rand() >> 11) % 3;
	printf ("%d\n",prob);
	
	
	system ("Pause");
	return 0;
}
