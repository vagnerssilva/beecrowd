#include <stdio.h>
 
int main() {
 
	int A, B, C;
	
	 scanf ("%i", &A);
			 	 
	 for (B = 1; B <= A; ++B){
	 	
	 scanf ("%i", &C);
	
	 if ( C == 0){
	 	printf ("NULL\n");
	 }
	 	 
	if (C%2 != 0){
	 	if(C > 0){
	 	 printf ("ODD POSITIVE\n");	
		}
		else {
		
	 	printf ("ODD NEGATIVE\n");
	    }
	    
	 }
		
	 if (C % 2 == 0 && C != 0){
	 	
	 	if (C > 0) {
	 	  printf ("EVEN POSITIVE\n");
		}
	 	if ( C < 0){
	 		printf ("EVEN NEGATIVE\n");
		 }	 	
	 }	 
						
	}
 
    return 0;
}