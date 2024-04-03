m, n = map(int, input().split())
dicio = {}
for i in range(m):
    nome, valor = input().split()
    dicio[nome] = int(valor)
soma = 0
while n > 0:
    frase = input()
    if frase == '.':
        print(soma)
        n -= 1
        soma = 0
        continue
    frase = frase.split()
    for i in frase:
        if i in dicio:
            soma += dicio[i]