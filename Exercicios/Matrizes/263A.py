matriz = []
for i in range(5):
    matriz.append(list(map(int, input().split())))
for i in range(5):
    for j in range(5):
        if matriz[i][j] == 1:
            linha = i
            coluna = j
            break
print(abs(linha - 2) + abs(coluna - 2))
