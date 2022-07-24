#include<stdio.h>

int main(){
	
	
	float A=1, B=3, C=2, D, I;
	
	while (B < 39){	
		A = A + (B/C);
		B = B + 2;
		C = C*2;	
	}
	
	printf ("%.2f\n", A);
	
	return 0;
}