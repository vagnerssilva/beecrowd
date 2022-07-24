n = int(input())
v = input()
p = 0
vt = v.split()

for i in range(n):
    vt[i] = int(vt[i])

m = vt[0]

for c in range(1, n):
    if vt[c] < m:
        m = vt[c]
        p = c

print(f'Menor valor: {m}')
print(f'Posicao: {p}')