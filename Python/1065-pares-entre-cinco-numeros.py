numeroUm = int(input())
numeroDois = int(input())
numeroTres = int(input())
numeroQuatro = int(input())
numeroCinco = int(input())
contador = 0
if numeroUm%2==0:
    contador = contador+1
if numeroDois%2==0:
    contador = contador+1
if numeroTres%2==0:
    contador = contador+1
if numeroQuatro%2==0:
    contador = contador+1
if numeroCinco%2==0:
    contador = contador+1
print('{} valores pares'.format(contador))