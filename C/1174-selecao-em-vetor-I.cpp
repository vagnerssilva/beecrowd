#include <stdio.h>

int main (){
	
 // Discentes:
 // Beatriz Mota de Sena
 // Thâmara Raíssa Monteiro Lins
 // Vagner dos Santos da Silva
	
	float A[100];
	int I;
	
	I = 0;
	
	while (I < 100 ){
		
	scanf ("%f", &A[I]);
	
	I = I + 1;
			
	}
	
	I = 0;
	
	while (I < 100){
		
	if (A[I] <= 10){
		
	printf ("A[%i] = %.1f\n", I, A[I]);	
		
	}
		
	I = I + 1;	
			
	}
	
	return 0;
}