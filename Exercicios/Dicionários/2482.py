n = int(input())
dicio = {}
for i in range(n):
    idioma = input()
    natal = input()
    dicio[idioma] = natal
n = int(input())
for i in range(n):
    nome = input()
    idioma = input()
    print(nome)
    print(dicio[idioma])
    print()