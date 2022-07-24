numero = float(input())
imposto = 0
totalPagar = 0
if numero<2000:
    print('Isento')
elif numero>2000 and numero<=3000:
    print('R$ {:.2f}'.format((numero-2000)*0.08))
elif numero>3000 and numero<=4500:
    imposto = 1000*0.08
    numero = numero-3000
    if numero>0:
        imposto = imposto+numero*0.18
    print ('R$ {:.2f}'.format(imposto))
elif numero>4500:
    imposto = 1000*0.08+1500*0.18
    numero = numero-4500
    if numero>0:
        imposto = imposto+numero*0.28
    print ('R$ {:.2f}'.format(imposto))