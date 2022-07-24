#include <stdio.h>
int main (){
	
	int A;
	
	scanf ("%i", &A);
	
	if (A == 0){
		printf ("E\n");
	}
	else if (A > 0 && A < 36){
		printf ("D\n");
	}
	else if (A > 35 && A < 61){
		printf ("C\n");
	}
	else if (A > 60 && A < 86){
		printf ("B\n");
	}
	else if (A > 85 && A < 101){
		printf ("A\n");
	}

	return 0;
}