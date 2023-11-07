from random import randint
from time import sleep
import os
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

print("Os jogos vão iniciar agora :O")
vidas_pc = vidas_jogador = tamanho
jogadas_pc = []
while True:
    if vidas_pc == 0:
        print("O jogador venceu!")
        break
    if vidas_jogador == 0:
        print("O PC venceu")
        break
    print('Vez do jogador:')
    linha, coluna = map(int, input(f"Jogador, coloque a coordenada do seu ataque: ").split())
    linha -= 1
    coluna -= 1
    if tabuleiro[linha][coluna] == "P":
        vidas_pc -= 1
        tabuleiro[linha][coluna] = "X"
        print("O jogador acertou um navio inimigo")
    if vidas_pc == 0:
        print("O jogador venceu!")
        break
    print("Vez do PC")
    linha_pc = randint(1, tamanho)
    coluna_pc = randint(1, tamanho)
    linha_pc -= 1
    coluna_pc -= 1
    while [linha_pc, coluna_pc] in jogadas_pc:
        linha_pc = randint(1, tamanho)
        coluna_pc = randint(1, tamanho)
        linha_pc -= 1
        coluna_pc -= 1
    jogadas_pc.append([linha_pc, coluna_pc])
    if tabuleiro[linha_pc][coluna_pc] == "N":
        vidas_jogador -= 1
        tabuleiro[linha_pc][coluna_pc] = "Y"
        print("O PC acertou um navio inimigo")
    sleep(3)
    if vidas_jogador == 0:
        print("O PC venceu")
        break
    os.system("cls")