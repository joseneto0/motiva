def kadane(a, n, todos_negativos):
    maior_atual = 0
    maior_total = -1e10
    anterior = False
    for i in range(n):
        atual = (a[i] % 2 == 0)
        if (i > 0):
            if (atual == anterior):
                maior_atual = 0
        if todos_negativos:
            maior_atual = a[i]
        else:
            maior_atual += a[i]
        if not todos_negativos:
            if maior_atual < 0:
                maior_atual = 0
        maior_total = max(maior_total, maior_atual)
        anterior = atual
    return maior_total


t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    todos_negativos = True
    for i in a:
        if i > 0:
            todos_negativos = False
            break
    print(kadane(a, n, todos_negativos))