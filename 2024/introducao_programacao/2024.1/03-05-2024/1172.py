numeros = []
for i in range(10):
    x = int(input())
    numeros.append(x)
    if numeros[i] <= 0:
        print(f'X[{i}] = 1')
    else:
        print(f'X[{i}] = {numeros[i]}')