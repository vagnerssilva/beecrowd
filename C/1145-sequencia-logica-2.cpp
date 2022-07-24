#include <stdio.h>
int main (){
	
	int A, B, C, D, X=0;
	
	scanf ("%i %i", &A, &B);
	
	for (C = 1; C <= B; C++){	
	
	X = X + 1;	
	
	printf ("%i", X);

    if (C%A != 0){
    	printf (" ");
	}		
		
	if (C%A == 0){
		
	printf ("\n");
				
	}		
}
    if (B%A != 0){
    
    printf ("\n");
    	
	}
	
	return 0;
}