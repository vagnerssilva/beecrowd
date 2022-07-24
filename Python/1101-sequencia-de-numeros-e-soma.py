while True:
    valores = str(input()).split()
    valorUm = int(valores[0])
    valorDois = int(valores[1])
    soma = 0
    if valorUm <= 0 or valorDois <= 0:
        break
    else:
        if valorUm > valorDois:
            for i in range(valorDois, valorUm+1):
                print(f'{i} ', end='')
                soma += i
            print(f'Sum={soma}')
        else:
            for i in range(valorUm, valorDois+1):
                print(f'{i} ', end='')
                soma += i
            print(f'Sum={soma}')