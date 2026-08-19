# Iniciando e printando o tabuleiro

def posicaoValida(linha, coluna):
    if linha >= 1 and linha <= 8 and coluna >= 1 and coluna <= 8:
        return True
    else:
        return False
    # poderia ser assim:
    # return linha >= 1 and linha <= 8 and coluna >= 1 and coluna <= 8

def mostrarTabuleiro(tabuleiro):
    print()
    print("    1   2   3   4   5   6   7   8")
    print("  ---------------------------------")
    for linha in range(1, 9):
        print(linha, '|', end="")
        for coluna in range(1, 9):
            print(f" {tabuleiro[linha][coluna]} |", end='')
        print()
        print("  ---------------------------------")
    print()
    print("  b = branca    B = Dama branca")
    print("  p = preta     P = Dama preta")
    print()

tabuleiro = []
for i in range(9):
    tabuleiro.append(['.'] * 9)

for linha in range(9):
    for coluna in range(1, 9):
        if ((linha + coluna) % 2 != 0) and linha <= 3:
            tabuleiro[linha][coluna] = 'p'

        if ((linha + coluna) % 2 != 0) and linha >= 6:
            tabuleiro[linha][coluna] = 'b'

jogador = 'b'
while True:
    mostrarTabuleiro(tabuleiro)
    if jogador == 'b':
        print("Vez das brancas!")
    else:
        print("Vez das pretas!")

    linha = int(input("Digite a linha da peça: "))
    coluna = int(input("Digite a coluna da peça: "))
    if not posicaoValida(linha, coluna):
        print("Posição Inválida")
    elif tabuleiro[linha][coluna] == '.':
        print("Não existe peça nessa posição")
    elif tabuleiro[linha][coluna] != jogador:
        print("Essa peça não é sua")
    else:
        print(f"Peça escolhida: {tabuleiro[linha][coluna]}")
        if jogador == 'b':
            jogador = 'p'
        else:
            jogador = 'b'

    print()
