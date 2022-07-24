#include<stdio.h>

int main(){
	
	int A=0, B=1, C, D[50], E;
	
	D[0]=0;
	D[1]=1;
	
	scanf("%i", &C);
	
	for (E=2;E<46;E++){	
		D[E] = D[E-2] + D[E-1];	
	}
	for(E=0;E<C;E++){
		printf("%i", D[E]);
			if(E<C-1){
				printf(" ");
			}
	}
	printf("\n");
	
	return 0;
}