#include <stdio.h>
int main (){
	
	int A, B, C, D = 0;
	
	scanf ("%i %i", &A, &B);
	
	while (A > 0 && B > 0){
		
	if (A > B){
	
	for (C = B; C <= A; C++){
		
	D = D + C;
	
	printf ("%i ", C);	
		
	}	
	
	printf ("Sum=%i\n", D);
		
	}
	else if (A < B){
	
	for (C = A; C <= B; C++){
		
	D = D + C;
	
	printf ("%i ", C);	
		
	}	
	
	printf ("Sum=%i\n", D);
		
	}
	
	else if (A == B){
		
	printf ("%i %i Sum=%i", A, B, A+B);	
	
	}
	
	A = 0;
	B = 0;
	C = 0;
	D = 0;
		
	scanf ("%i %i", &A, &B);
			
	}
	
	return 0;
}