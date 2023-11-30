def kadane(lista, tamanho):
    maior_atual = maior_total = 0
    for i in range(tamanho):
        maior_atual += lista[i]
        if maior_atual < 0:
            maior_atual = 0
        maior_total = max(maior_total, maior_atual)
    return maior_total


lista = [1, -10, 9, 8, -20, 5]
tamanho = 6
print(kadane(lista, tamanho))