#include <stdio.h>
int main() {

float A, B = 0, C = 0, D;



 scanf ("%f", &A);

 while (A >= 0){
 	
 	
 	B = B + A;
 	C = C + 1;
 		
 	scanf ("%f", &A);
 	
 }

  D = B / C;
  printf ("%.2f\n", D);


    return 0;

}