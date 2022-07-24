#include <stdio.h>
int main (){
	
	int A, B = 0, C = 0, D = 0,E = 0, F = 0, G = 0, I;
	
	scanf ("%i", &A);
	
	for (I = 1; I <= A; I++){
		
		B = I;
		C = I*I;
		D = I*I*I;
		
		E = I;
		F = C + 1;
		G = D + 1;
		
		printf ("%i %i %i\n", B, C, D);
		printf ("%i %i %i\n", E, F, G);
					
		B = 0;
		C = 0;
		D = 0;
		
		E = 0;
		F = 0;
		G = 0;
		
	}
	
	return 0;
}