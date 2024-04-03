from time import sleep
from random import randint
import os
matriz_jogador = []
print("Bem vindo ao jogo: Batalha Naval")
nome = input("Digite seu nome para começar: ")
tamanho = int(input("Digite o tamanho do tabuleiro [TAMANHO x TAMANHO]: "))
for i in range(tamanho):
    matriz_jogador.append(["~"] * tamanho)

for i in range(tamanho):
    linha, coluna = map(int, input(f"Digite a coordenada do seu {i+1}° navio: [x y] ").split())
    linha -= 1
    coluna -= 1
    if (linha >= 0 and linha < tamanho and coluna >= 0 and coluna < tamanho and matriz_jogador[linha][coluna] == "~"):
        matriz_jogador[linha][coluna] = "N"
        print("\033[32mNavio posicionado com sucesso\033[m")
    else:
        while True:
            print(f"Pfv coloque uma coordenada que está no intervalo mencionado [1 - {tamanho}] ou digite um valor que não foi colocado:  ")
            linha, coluna = map(int, input(f"Digite a coordenada do seu {i+1}° navio: [x y] ").split())
            linha -= 1
            coluna -= 1
            if (linha >= 0 and linha < tamanho and coluna >= 0 and coluna < tamanho and matriz_jogador[linha][coluna] == "~"):
                matriz_jogador[linha][coluna] = "N"
                print("\033[32mNavio posicionado com sucesso\033[m")
                break
    sleep(1)
    os.system('cls')
    
    print(f"Como está o tabuleiro atualmente: ")
    for j in range(tamanho):
        for k in range(tamanho):
            if (matriz_jogador[j][k] == "P"):
                print("~",end=' ')
            else:
                print(matriz_jogador[j][k], end=' ')
        print()

print(f"PC vai fazer a escolha: ")
for i in range(6):
    print(".", end=' ', flush=True)
    sleep(0.5)
print()

for i in range(tamanho):
    linha_pc = randint(0, tamanho-1)
    coluna_pc = randint(0, tamanho-1)

    if (matriz_jogador[linha_pc][coluna_pc] == "~"):
        matriz_jogador[linha_pc][coluna_pc] = "P"
    else:
        while matriz_jogador[linha_pc][coluna_pc] != "~":
            linha_pc = randint(1, tamanho-1)
            coluna_pc = randint(1, tamanho-1)
        matriz_jogador[linha_pc][coluna_pc] = "P"

vida_pc = vida_jogador = tamanho
os.system('cls')
print("\033[31mQue os jogos começem!\033[m")
sleep(2)
jogadas = []
while True:
    if vida_pc == 0:
        print("Você venceu!!!!")
        break
    if vida_jogador == 0:
        print("Você perdeu :c")
        break
    print(f"Jogador da Vez: {nome}")
    linha, coluna = map(int, input(f"Digite a coordenada do seu ataque: ").split())
    linha -= 1
    coluna -= 1
    if (linha >= 0 and linha < tamanho and coluna >= 0 and coluna < tamanho):
        if matriz_jogador[linha][coluna] == "P":
            vida_pc -= 1
            matriz_jogador[linha][coluna] = "X"
            print("Você acertou um navio inimigo :D")
            print(f"O PC tem {vida_pc} vidas")
        else:
            print("Você não achou nenhum navio inimigo")
    else:
        while True:
            linha, coluna = map(int, input(f"Digite a coordenada do seu ataque: ").split())
            linha -= 1
            coluna -= 1
            if (linha >= 0 and linha < tamanho and coluna >= 0 and coluna < tamanho):
                if matriz_jogador[linha][coluna] == "P":
                    vida_pc -= 1
                    matriz_jogador[linha][coluna] = "X"
                    print("Você acertou um navio inimigo :D")
                    print(f"O PC tem {vida_pc} vidas")
                else:
                    print("Você não achou nenhum navio inimigo")
                break
    sleep(1)
    os.system("cls")
    print("O tabuleiro se encontra dessa forma: ")
    for j in range(tamanho):
        for k in range(tamanho):
            if (matriz_jogador[j][k] == "P" or matriz_jogador[j][k] == "N"):
                print("~",end=' ')
            else:
                if (matriz_jogador[j][k] == "X"):
                    print(f"\033[32m{matriz_jogador[j][k]}\033[m", end=' ')
                elif (matriz_jogador[j][k] == "Y"):
                    print(f"\033[31m{matriz_jogador[j][k]}\033[m", end=' ')
                else:
                     print(matriz_jogador[j][k], end=' ')     
        print()
    sleep(2)
    os.system("cls")
    if vida_pc == 0:
        continue
    print("Jogador da Vez: PC")
    print("Digite a coordenada do seu ataque: ")
    sleep(2)
    linha_pc = randint(0, tamanho-1)
    coluna_pc = randint(0, tamanho-1)
    if (linha_pc, coluna_pc) in jogadas:
        while True:
            linha_pc = randint(0, tamanho-1)
            coluna_pc = randint(0, tamanho-1)
            if (linha_pc, coluna_pc) not in jogadas:
                jogadas.append((linha_pc, coluna_pc))
                break
    print(linha_pc+1, end=' ', flush=True)
    sleep(1)
    print(coluna_pc+1, flush=True)
    sleep(1)
    if (matriz_jogador[linha_pc][coluna_pc] == "N"):
        matriz_jogador[linha_pc][coluna_pc] = "Y"
        vida_jogador -= 1
        print("O PC achou um navio")
        print(f"Quantidade de vidas do jogador {nome}: {vida_jogador}")
    else:
        print("O PC não achou um navio")
    
    sleep(1)
    os.system("cls")
    if vida_jogador == 0:
        continue