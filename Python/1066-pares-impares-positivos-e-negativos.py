numeroUm = int(input())
numeroDois = int(input())
numeroTres = int(input())
numeroQuatro = int(input())
numeroCinco = int(input())
contadorPar = 0
contadorPositivo = 0
contadorNegativo = 0
if numeroUm%2==0:
    contadorPar = contadorPar+1
if numeroDois%2==0:
    contadorPar = contadorPar+1
if numeroTres%2==0:
    contadorPar = contadorPar+1
if numeroQuatro%2==0:
    contadorPar = contadorPar+1
if numeroCinco%2==0:
    contadorPar = contadorPar+1

if numeroUm>0:
    contadorPositivo = contadorPositivo+1
if numeroDois>0:
    contadorPositivo = contadorPositivo+1
if numeroTres>0:
    contadorPositivo = contadorPositivo+1
if numeroQuatro>0:
    contadorPositivo = contadorPositivo+1
if numeroCinco>0:
    contadorPositivo = contadorPositivo+1

if numeroUm<0:
    contadorNegativo = contadorNegativo+1
if numeroDois<0:
    contadorNegativo = contadorNegativo+1
if numeroTres<0:
    contadorNegativo = contadorNegativo+1
if numeroQuatro<0:
    contadorNegativo = contadorNegativo+1
if numeroCinco<0:
    contadorNegativo = contadorNegativo+1
print('{} valor(es) par(es)'.format(contadorPar))
print('{} valor(es) impar(es)'.format(5-contadorPar))
print('{} valor(es) positivo(s)'.format(contadorPositivo))
print('{} valor(es) negativo(s)'.format(contadorNegativo))