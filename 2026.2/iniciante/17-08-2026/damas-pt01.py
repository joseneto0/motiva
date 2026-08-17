# Iniciando e printando o tabuleiro

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

for linha in range(1, 9):
    for coluna in range(1, 9):
        if ((linha + coluna) % 2 != 0) and linha <= 3:
            tabuleiro[linha][coluna] = 'p'

        if ((linha + coluna) % 2 != 0) and linha >= 6:
            tabuleiro[linha][coluna] = 'b'

mostrarTabuleiro(tabuleiro)