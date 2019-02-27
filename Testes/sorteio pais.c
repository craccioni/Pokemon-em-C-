#include <stdlib.h>
#include <stdio.h>


int main()
{
	char pokemon[10][20] = {"Brasil","Paraguai","Argentina"};
	int i;
	
	
	
	i = (rand() >> 11) % 3;
	
	//cout << pais[a] << endl;
	printf ("%s",pokemon[i]);
	
	
	return 0;
}
