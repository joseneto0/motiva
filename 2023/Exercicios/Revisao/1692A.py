t = int(input())
for i in range(t):
    valores = list(map(int, input().split()))
    cont = 0
    for j in range(1, 4):
        if valores[0] < valores[j]:
            cont += 1
    print(cont)
    valores.clear()