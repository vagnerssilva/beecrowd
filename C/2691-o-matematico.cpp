#include <stdio.h>
int main (){
	
	int A; 
	
	scanf ("%i", &A);
	
	int B = 1, C[A], D[A], E = 0, I;
	char N;
		
	while (B <= A){
		
	scanf ("%i %c %i", &C[E], &N, &D[E]);	
							
	B = B + 1;
	E = E + 1;
		
	}
	
	E = 0;
	
    for (I = 0; I < A; I++){
    	
    if (C[I] == D[I]){
    	
    printf("%i x 5 = %i\n", C[I],C[I]*5);	
    printf("%i x 6 = %i\n", C[I],C[I]*6);	
    printf("%i x 7 = %i\n", C[I],C[I]*7);
	printf("%i x 8 = %i\n", C[I],C[I]*8);	
    printf("%i x 9 = %i\n", C[I],C[I]*9);
    printf("%i x 10 = %i\n", C[I],C[I]*10);	
 	
	}	
    	
    if (C[I] != D[I]){	
    
    printf("%i x 5 = %i && %i x 5 = %i\n", C[I],C[I]*5, D[I], D[I]*5);	
    printf("%i x 6 = %i && %i x 6 = %i\n", C[I],C[I]*6, D[I], D[I]*6);	
    printf("%i x 7 = %i && %i x 7 = %i\n", C[I],C[I]*7, D[I], D[I]*7);
	printf("%i x 8 = %i && %i x 8 = %i\n", C[I],C[I]*8, D[I], D[I]*8);	
    printf("%i x 9 = %i && %i x 9 = %i\n", C[I],C[I]*9, D[I], D[I]*9);
    printf("%i x 10 = %i && %i x 10 = %i\n", C[I],C[I]*10, D[I], D[I]*10);
    
    }
    
   
    	
	}
	
	
	
	return 0;
}