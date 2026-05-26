M, N = map(int, input().split())
dicio = {}
rep = 0
somador = 0
string = ''
for i in range(M):
    nome, valor = input().split()
    valor = int(valor)
    dicio[nome] = valor
while rep < N:
    texto = input()
    if texto != '.':
        string += ' ' + texto
    else:
        rep += 1
        string = string.split()
        for i in string:
            if i in dicio.keys():
                somador += dicio[i]
        print(somador)
        string = ''
        somador = 0