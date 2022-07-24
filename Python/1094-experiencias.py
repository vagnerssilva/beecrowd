quantidade = int(input())
coelhos = 0
ratos = 0
sapos = 0
total = 0
for i in range(0, quantidade):
    cobaia = str(input()).split()
    cobaias = int(cobaia[0])
    total = total + cobaias
    if cobaia[1] == 'C':
        coelhos = coelhos + cobaias
    elif cobaia[1] == 'R':
        ratos = ratos + cobaias
    elif cobaia[1] == 'S':
        sapos = sapos + cobaias
print(f'Total: {total} cobaias')
print(f'Total de coelhos: {coelhos}')
print(f'Total de ratos: {ratos}')
print(f'Total de sapos: {sapos}')
print(f'Percentual de coelhos: {100*coelhos/total:.2f} %')
print(f'Percentual de ratos: {100*ratos/total:.2f} %')
print(f'Percentual de sapos: {100*sapos/total:.2f} %')