n = int(input())
for i in range(n):
    valores = list(map(int,input().split()))
    valores.sort()
    print(valores[1])
    valores.clear()
