numeroUm = float(input())
numeroDois = float(input())
numeroTres = float(input())
numeroQuatro = float(input())
numeroCinco = float(input())
numeroSeis = float(input())
contador = 0
media = 0
if numeroUm>0:
    contador = contador+1
    media = media+numeroUm
if numeroDois>0:
    contador = contador+1
    media = media+numeroDois
if numeroTres>0:
    contador = contador+1
    media = media+numeroTres
if numeroQuatro>0:
    contador = contador+1
    media = media+numeroQuatro
if numeroCinco>0:
    contador = contador+1
    media = media+numeroCinco
if numeroSeis>0:
    contador = contador+1
    media = media+numeroSeis
print('{} valores positivos'.format(contador))
print('{:.1f}'.format(media/contador))