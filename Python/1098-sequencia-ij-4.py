I = 0
J = 1
C = 0
for i in range(1, 34):
    if I==0 or I==1 or I>1.9:
        print(f'I={I:.0f} J={J:.0f}')
    else:
        print(f'I={I:.1f} J={J:.1f}')
    J += 1
    if i%3 == 0:
        J=1
        C = C+0.2
        J += C
        I += 0.2