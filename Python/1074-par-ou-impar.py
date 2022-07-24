numero = int(input())

for i in range(0,numero, 1):
    contador = int(input())
    if contador%2==0 and contador<0:
        print('EVEN NEGATIVE')
    elif contador%2==0 and contador>0:
        print('EVEN POSITIVE')
    elif contador%2!=0 and contador<0:
        print('ODD NEGATIVE')
    elif contador%2!= 0 and contador>0:
        print('ODD POSITIVE')
    elif contador == 0:
        print('NULL')