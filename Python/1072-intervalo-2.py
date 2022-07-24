contador = int(input())
dentro = 0
fora = 0
for i in range(0,contador,1):
    contadorDois = int(input())
    if contadorDois >= 10 and contadorDois <=20:
        dentro = dentro + 1
    else:
        fora = fora + 1
print('{} in'.format(dentro))
print('{} out'.format(fora))