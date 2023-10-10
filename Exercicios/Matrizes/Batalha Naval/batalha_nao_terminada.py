from random import randint
tabuleiro = []
tamanho = int(input("Digite o tamanho do tabuleiro: "))
for i in range(tamanho):
    tabuleiro.append(["~"] * tamanho)
for i in range(tamanho):
    linha, coluna = map(int, input(f"Coloque a coordenada do {i+1}̣º návio: ").split())
    linha -= 1
    coluna -= 1
    while (linha < 0 or linha >= tamanho or coluna < 0 or coluna >= tamanho) or tabuleiro[linha][coluna] != "~":
        linha, coluna = map(int, input(f"Coloque a coordenada do {i+1}̣º návio: ").split())
        linha -= 1
        coluna -= 1
    tabuleiro[linha][coluna] = "N"
print("O PC vai fazer a escolha: ")
for i in range(tamanho):
    linha_pc = randint(1, tamanho)
    coluna_pc = randint(1, tamanho)
    linha_pc -= 1
    coluna_pc -= 1
    while tabuleiro[linha_pc][coluna_pc] != "~":
        linha_pc = randint(1, tamanho)
        coluna_pc = randint(1, tamanho)
        linha_pc -= 1
        coluna_pc -= 1
    tabuleiro[linha_pc][coluna_pc] = "P"
for i in range(tamanho):
    for j in range(tamanho):
        if tabuleiro[i][j] == "P":
            print("~", end=" ")
        else:
            print(tabuleiro[i][j], end=" ")
    print()