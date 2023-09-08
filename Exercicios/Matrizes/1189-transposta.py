s = input()
matriz = []
for i in range(12):
    matriz.append([0] * 12)

for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())


inicio = 1
fim = 11
cont = soma = 0
for i in range(5):
    for j in range(inicio, fim):
        soma += matriz[j][i]
        cont += 1
    inicio += 1
    fim -= 1

if s == "S":
    print(f"{soma:.1f}")
else:
    print(f"{soma/cont:.1f}")
