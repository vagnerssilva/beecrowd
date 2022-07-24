#include <stdio.h>
int main (){
	
	double L;
	double N[100];
	int I;
	
	scanf ("%lf", &L);
	N[0] = L;
	
	for (I = 1; I <= 99; I++){				
	 N[I] = N[I-1] / 2.0;		
	}
	
	for (I = 0; I <= 99; I++){
	 printf ("N[%d] = %.4lf\n", I, N[I]);			
	}
			
	return 0;
}