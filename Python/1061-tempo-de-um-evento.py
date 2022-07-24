primeiroDia = str(input()).split()
tempo = str(input()).split()
segundoDia = str(input()).split()
tempoDois = str(input()).split()
diaUm = int(primeiroDia[1])
diaDois = int(segundoDia[1])
horaUm = int(tempo[0])
minutoUm = int(tempo[2])
segundoUm = int(tempo[4])
horaDois = int(tempoDois[0])
minutoDois = int(tempoDois[2])
segundoDois = int(tempoDois[4])
tudoSegundosUm = diaUm*24*60*60+horaUm*60*60+minutoUm*60+segundoUm
tudoSegundosDois = diaDois*24*60*60+horaDois*60*60+minutoDois*60+segundoDois
subtraçãoDias = tudoSegundosDois - tudoSegundosUm
W = subtraçãoDias//86400
X = subtraçãoDias%86400//3600
Y = subtraçãoDias%86400%3600//60
Z = subtraçãoDias%86400%3600%60
print('{} dia(s)'.format(W))
print('{} hora(s)'.format(X))
print('{} minuto(s)'.format(Y))
print('{} segundo(s)'.format(Z))