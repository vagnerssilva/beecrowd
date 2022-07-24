#include <stdio.h>

// Discentes:
// Beatriz Mota de Sena
// Thâmara Raíssa Monteiro Líns
// Vagner dos Santos da Silva

int main(){
	
	int A, X, Y, Z, Inter, Gremio, Empates, I;
	
	A = 0;
	X = 1;
	Inter = 0;
	Gremio = 0;
	Empates = 0;
	
	while (X == 1){
		
	A = A + 1;	
		
	scanf ("%i %i", &Y, &Z);
	
	if (Y > Z) {
		
	Inter = Inter + 1;	
		
	}
	
	else if (Z > Y) {
		
	Gremio = Gremio + 1;	
		
	}
	
	else if (Y == Z) {
		
	Empates = Empates + 1;	
		
	}
		
	printf ("Novo grenal (1-sim 2-nao)\n");
	scanf ("%i", &X);
				
	}
		
	printf ("%i grenais\n", A);
	printf ("Inter:%i\n", Inter);
	printf ("Gremio:%i\n", Gremio);
	printf ("Empates:%i\n", Empates);
	
	if (Inter > Gremio){
		
	printf ("Inter venceu mais\n");	
		
	}
	else if (Gremio > Inter){
		
	printf ("Gremio venceu mais\n");	
		
	}
	else if (Gremio == Inter){
		
	printf ("Nao houve vencedor\n");	
		
	}
	
	return 0;	
}