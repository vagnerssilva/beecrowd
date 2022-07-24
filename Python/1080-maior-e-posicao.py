maior = 0
contador = 0
contadorPosicao = 0
for i in range(0, 100, 1):
    valor = int(input())
    contador += 1
    if valor>maior:
        maior = valor
        contadorPosicao = contador
print(f'{maior}\n{contadorPosicao}')