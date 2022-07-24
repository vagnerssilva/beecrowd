n = int(input())
for i in range(n):

    c = 0
    d = 0
    a = input()
    a = a.replace('.','')

    for j in range(len(a)):

        if a[j] == '<':
            c += 1
        elif a[j] == '>' and c > 0:
            d += 1
            c -= 1

    print(d)