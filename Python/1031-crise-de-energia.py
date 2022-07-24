n = 0
v = 1

while True:
    n = int(input())
    if (n == 0):
        break

    while True:
        a = 0

        for i in range(1,n):
            a = (a+v)%i

        if a != 11:
            v += 1
        else:
            break

    print(v)
    v = 0