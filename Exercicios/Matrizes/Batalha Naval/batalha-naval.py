import os
from random import randint
from time import sleep

tabuleiro_jogador = []
tabuleiro_pc = []
tabuleiro_partida_jogador = []
tabuleiro_partida_pc = []
for i in range(10):
    tabuleiro_jogador.append(['~'] * 10)
    tabuleiro_pc.append(["~"] * 10)
    tabuleiro_partida_jogador.append(['~'] * 10)
    tabuleiro_partida_pc.append(["~"] * 10)

print(f"Bem Vindo ao batalha naval criado no Motiva!")
nome = input("Digite seu nome para comecar: ")
sleep(1)
for i in range(10):
    print(f"Vamos posicionar os seus navios: ")
    print("Atualmente o seu tabuleiro se encontra dessa forma: ")
    for j in range(10):
        for k in range(10):
            if (tabuleiro_jogador[j][k] == "N"):

                print(f"\033[34m{tabuleiro_jogador[j][k]}\033[m", end=' ')
            else:
                print(tabuleiro_jogador[j][k], end=' ')
        print()
    linha, coluna = map(int, input(f"Digite a linha e coluna que vai ficar o seu {i+1}° navio: ").split())
    linha -= 1
    coluna -= 1
    if (linha >= 0 and linha <= 10 and coluna >= 0 and coluna <= 10 and tabuleiro_jogador[linha][coluna] != "N"):
        tabuleiro_jogador[linha][coluna] = "N"
        print("Barco inserido com sucesso")
    else:
        while True:
            print("Por favor, coloque um valor entre 1 - 10 ou um valor que não foi digitado anteriormente")
            linha, coluna = map(int, input(f"Digite a linha e coluna que vai ficar o seu {i+1}° navio: ").split())
            linha -= 1 
            coluna -= 1
            if (linha >= 0 and linha <= 10 and coluna >= 0 and coluna <= 10 and tabuleiro_jogador[linha][coluna] != "N"):
                print("Barco inserido com sucesso")
                tabuleiro_jogador[linha][coluna] = "N"
                break
    sleep(1)
    print("Computador fazendo escolha...")
    linha_pc = randint(0, 9)
    coluna_pc = randint(0, 9)
    while tabuleiro_pc[linha_pc][coluna_pc] == "N":
        linha_pc = randint(0,9)
        coluna_pc = randint(0,9)
    tabuleiro_pc[linha_pc][coluna_pc] = 'N'

vidas_jogador = vidas_pc = 10
print("\033[31mQue comecem os jogos!\033[m")
sleep(2)
os.system('cls')
while True:
    if (vidas_pc == 0):
        print(f"\033[32mParabéns!!!\nVocê venceu o jogo!\033[m")
        break
    if (vidas_jogador == 0):
        print(f"\033[31mVocê perdeu :C\nO PC venceu o jogo!\033[m")
        break
    print(f"Vez do jogador: {nome}")
    print("Atualmente o tabuleiro inimigo se encontra dessa forma: ")
    for j in range(10):
        for k in range(10):
            if (tabuleiro_partida_pc[j][k] == "X"):
                print(f"\033[31m{tabuleiro_partida_pc[j][k]}\033[m", end=' ')
            else:
                print(tabuleiro_partida_pc[j][k], end=' ')
        print()
    linha, coluna = map(int, input(f"Digite a linha e coluna que você vai atacar: ").split())
    linha -= 1
    coluna -= 1
    if (linha >= 0 and linha <= 10 and coluna >= 0 and coluna <= 10):
        if (tabuleiro_pc[linha][coluna] == "N"):
            tabuleiro_partida_pc[linha][coluna] = "X"
            vidas_pc -= 1
            print("Você acertou um navio!")
            print(f"O PC tem {vidas_pc} navios restantes")
        else:
            print("Você não acertou nenhum navio :c")
    else:
        while True:
            print("Por favor, coloque um valor entre 1 - 10")
            linha, coluna = map(int, input(f"Digite a linha e coluna que vai ficar o seu {i+1}° navio: ").split())
            linha -= 1 
            coluna -= 1
            if (linha >= 0 and linha <= 10 and coluna >= 0 and coluna <= 10):
                if (tabuleiro_pc[linha][coluna] == "N"):
                    tabuleiro_partida_pc[linha][coluna] = "X"
                    print("\033[32mVocê acertou um navio!\033[m")
                    vidas_pc -= 1
                    print(f"O PC tem {vidas_pc} navios restantes")
                else:
                    print("\033[31mVocê não acertou nenhum navio :c\033[m")
    sleep(2)
    os.system("cls")
    print(f"Vez do Jogador: PC")
    print(f"Atualmente o tabuleiro de {nome} se encontra dessa forma: ")
    for j in range(10):
        for k in range(10):
            if (tabuleiro_partida_jogador[j][k] == "N"):
                print(f"\033[34m{tabuleiro_partida_jogador[j][k]}\033[m", end=' ')
            else:
                print(tabuleiro_partida_jogador[j][k], end=' ')
        print()
    print("O PC está fazendo sua escolha...")
    for i in range(5):
        print(".", flush=True, end=' ')
        sleep(0.5)
    print()
    linha_pc = randint(0, 9)
    coluna_pc = randint(0, 9)
    if tabuleiro_jogador[linha_pc][coluna_pc] == "N":
        tabuleiro_partida_jogador[linha_pc][coluna_pc] = "X"
        vidas_jogador -= 1
        print("O PC encontrou um navio")
        print(f"Vidas do jogador {nome}: {vidas_jogador}")
    else:
        print("O PC não achou um navio")
    sleep(2)
    os.system("cls")