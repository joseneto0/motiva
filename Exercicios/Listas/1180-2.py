n = int(input())
lista = list(map(int, input().split()))
menor = 1000000
indice = 0
for i in range(n):
    if lista[i] < menor:
        menor = lista[i]
        indice = i
print(f"Menor valor: {menor}")
print(f"Posicao: {indice}")