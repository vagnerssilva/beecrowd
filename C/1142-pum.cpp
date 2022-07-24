#include <stdio.h>

int main(){
	
	int A, B, C;
	
	B = 1;
	C = 1;
	
	scanf ("%i", &A);
	
	while (B <= A*4){
				
	if (B != 4*C){
		
	printf ("%i ", B);
		
	}
	else if (B == 4*C){
		
	printf ("PUM\n");
	C = C + 1;	
		
	}	
			
	 B = B + 1;
	 
	}
	
	

	return 0;
}