#include<stdio.h>
int main(){
	
	float numero, imposto;
	scanf("%f", &numero);
	if (numero<2000){
		printf("Isento\n");
	}
	else if(numero>2000 && numero<=3000){
		printf("R$ %.2f\n", (numero-2000)*0.08);
	}
	else if(numero>3000 && numero<=4500){
		imposto = 1000*0.08;
		numero = numero-3000;
		if(numero>0){
			imposto = imposto+numero*0.18;
		}
		printf("R$ %.2f\n", imposto);
	}
	else if(numero>4500){
		imposto = 1000*0.08+1500*0.18;
		numero = numero-4500;
		if(numero>0){
			imposto = imposto+numero*0.28;
		}
		printf("R$ %.2f\n", imposto);
	}
	return 0;
}