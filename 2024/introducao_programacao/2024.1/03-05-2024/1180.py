posicao = 0
N = int(input())
lista = list(map(int, input().split()))
menor = 100000000000
for i in range(N):
    if lista[i] < menor:
        posicao = i 
        menor = lista[i]
print(f'Menor valor: {min(lista)}')
print(f'Posicao: {posicao}')