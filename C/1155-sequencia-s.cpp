#include<stdio.h>

int main(){
	
	
	float A=1, I;
	
	for (I=2;I<101;I++){	
		A = A + (1/I);	
	}
	
	printf ("%.2f\n", A);
	
	return 0;
}