numeroUm = int(input())
numeroDois = int(input())
primeiro = 0
segundo = 0
somador = 0
if numeroUm>numeroDois:
    primeiro = numeroUm
    segundo = numeroDois
else:
    primeiro = numeroDois
    segundo = numeroUm
for i in range(segundo+1,primeiro,1):
    if i%2!=0:
        somador = somador+i
print('{}'.format(somador))