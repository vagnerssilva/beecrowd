#include <stdio.h>

int main(){
	
	int A = 1;
	float B, C, D, E;
	
	B = 0;
	C = 0;
	D = 0;
	E = 0;
	
	while (A != 2){
		
		scanf ("%f", &B);
		
		while (B < 0 || B > 10) {	
			printf ("nota invalida\n");
			scanf ("%f", &B);	
		}
		
		if (B >= 0 && B <= 10){		
			D = B;			
		}
		
		scanf ("%f", &C);			

		while (C < 0 || C > 10) {	
			printf ("nota invalida\n");
			scanf ("%f", &C);
		}	
		
		if (C >= 0 && C <= 10){		
			E = C;			
		}
		
		printf ("media = %.2f\n", (D+C)/2);	
		printf ("novo calculo (1-sim 2-nao)\n");		
		scanf ("%i", &A);	
		
		while (A < 1 || A > 2){
			printf ("novo calculo (1-sim 2-nao)\n");
			scanf ("%i", &A);		
		}		
	}
	return 0;
}