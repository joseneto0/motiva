n, k = map(int, input().split())
valores = list(map(int, input().split()))
cont = 0
for i in valores:
    if i >= valores[k-1] and i > 0:
        cont += 1
print(cont)