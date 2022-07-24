numero = int(input())
if numero%2==0:
    numero = numero+1
for i in range(2,numero, 2):
    print('{}^2 = {}'.format(i,i**2))