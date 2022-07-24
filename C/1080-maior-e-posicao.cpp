#include <stdio.h>
int main (){
	
	int A = 1, B, C, D, I;
	
	
	while (A <= 100){
		
		scanf ("%i", &B);
		
		if (B > C){
			
			C = B;
			D = A;
			
			
		}
		
	A = A + 1;		
		
	}
	
	printf ("%i\n", C);
	printf ("%i\n", D);

	
	return 0;
}