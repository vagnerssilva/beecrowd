quantidade = int(input())
soma = 0
for i in range(0, quantidade):
    numero = str(input()).split()
    numeroUm = int(numero[0])
    numeroDois = int(numero[1])
    if numeroUm>numeroDois:
        for c in range(numeroDois+1, numeroUm):
            if c%2!=0:
                soma += c
    else:
        for c in range(numeroUm+1, numeroDois):
            if c%2!=0:
                soma += c
    print(f'{soma}')
    soma = 0