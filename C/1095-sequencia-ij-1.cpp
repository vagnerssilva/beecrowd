#include <stdio.h>
int main (){
	
	int j=60, i=1, a;
	
	printf ("I=%i J=%i\n", i, j);
	
	for (a = 1; a < 13; a++){
		
	printf ("I=%i J=%i\n", i+=3, j-=5);
			
	}
	
	return 0;
}