M, N = map(int, input().split())
dict = {}
rep = 0
somador = 0
string = ''
for i in range(M):
    nome, valor = input().split()
    valor = int(valor)
    dict[nome] = valor
while rep < N:
    texto = input()
    if texto != '.':
        string += ' ' + texto
    else:
        rep += 1
        string = string.split()
        for i in string:
            if i in dict.keys():
                somador += dict[i]
        print(somador)
        string = ''
        somador = 0