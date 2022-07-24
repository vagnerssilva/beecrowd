quantidade = int(input())
for i in range(0, quantidade, 1):
    valores = str(input()).split()
    valorUm = float(valores[0])
    valorDois = float(valores[1])
    valorTres = float(valores[2])
    print(f'{(valorUm*2+valorDois*3+valorTres*5)/10:.1f}')