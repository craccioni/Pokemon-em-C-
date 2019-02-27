#include <stdlib.h>
#include <stdio.h>
 
int maximo (int n, int v[]);
 
int main (){
	
	int n,i, v[5];
	
	v[0] = 2;
	v[1] = 3;

}	

int 
maximo (int n, int v[]) { 
   if (n == 1)
      return v[0];
   else {
      int x;
      x = maximo (n-1, v);
      // x é o máximo de v[0..n-2] 
      if (x > v[n-1]) 
	  	return x;
      else 
	  	return v[n-1]; 
   }
}
