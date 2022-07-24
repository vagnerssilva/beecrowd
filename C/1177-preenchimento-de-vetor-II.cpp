#include <stdio.h>
int main (){
	
	int N[1000], A, B = 0, C = -1, I;
	
	scanf ("%i", &A);
	
	for (I = 0; I < 1000; I++){
		
	C = C + 1;	
		
	printf ("N[%i] = %i\n", I, C);	
	
	if (C+1 == A){
	C = -1;			
	}		

}
        			
	return 0;
}