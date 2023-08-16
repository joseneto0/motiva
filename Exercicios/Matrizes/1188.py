operacao = input()
matriz = [[0 for j in range(12)] for i in range(12)]
for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())

soma = cont = 0
start = 5
end = 7
for i in range(7, 12):
    for j in range(start, end):
        soma += matriz[i][j]    
        cont += 1
    start -= 1
    end += 1

if operacao == 'S':
    print(f"{soma:.1f}")
else:
    print(f"{soma / cont:.1f}")