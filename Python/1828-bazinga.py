n = int(input())
c = 0
for i in range(n):

    a = input()
    b = a.split()
    c += 1

    if b[0] == 'tesoura' and b[1] == 'papel':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'papel' and b[1] == 'tesoura':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'papel' and b[1] == 'pedra':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'pedra' and b[1] == 'papel':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'pedra' and b[1] == 'lagarto':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'lagarto' and b[1] == 'pedra':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'lagarto' and b[1] == 'Spock':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'Spock' and b[1] == 'lagarto':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'Spock' and b[1] == 'tesoura':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'tesoura' and b[1] == 'Spock':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'tesoura' and b[1] == 'lagarto':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'lagarto' and b[1] == 'tesoura':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'lagarto' and b[1] == 'papel':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'papel' and b[1] == 'lagarto':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'papel' and b[1] == 'Spock':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'Spock' and b[1] == 'papel':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'Spock' and b[1] == 'pedra':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'pedra' and b[1] == 'Spock':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'pedra' and b[1] == 'tesoura':
        print(f'Caso #{c}: Bazinga!')
    if b[0] == 'tesoura' and b[1] == 'pedra':
        print(f'Caso #{c}: Raj trapaceou!')

    if b[0] == 'pedra' and b[1] == 'pedra':
        print(f'Caso #{c}: De novo!')
    if b[0] == 'tesoura' and b[1] == 'tesoura':
        print(f'Caso #{c}: De novo!')
    if b[0] == 'papel' and b[1] == 'papel':
        print(f'Caso #{c}: De novo!')
    if b[0] == 'lagarto' and b[1] == 'lagarto':
        print(f'Caso #{c}: De novo!')
    if b[0] == 'Spock' and b[1] == 'Spock':
        print(f'Caso #{c}: De novo!')