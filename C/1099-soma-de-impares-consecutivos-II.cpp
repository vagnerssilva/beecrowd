#include <stdio.h>
int main (){
	
	int A, B, C = 0, I, X, Y;
	
	scanf ("%i", &A);
	
	for (I = 0; I < A; I++){
		
	scanf ("%i %i", &X, &Y);	
			
	if (X > Y){
		
	for (B = Y+1; B < X; B++ ){
		
	if(B%2 != 0){
	
	C = C + B;
		
	}
					
	}
	printf ("%i\n", C); 	
	C = 0;			
	}
		
	if (X < Y)	{
		
	for (B = X+1; B < Y; B++ ){
		
	if(B%2 != 0){
	
	C = C + B;
		
	}
	  			
	}
	
	printf ("%i\n", C); 
	C = 0;			
	}	
	
	if (X == Y){
	printf ("%i\n", C); 	
	}
				
	}
	
	return 0;
}