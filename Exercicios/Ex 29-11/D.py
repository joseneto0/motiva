t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    menor = min(a,b)
    maior = max(a,b)
    cont = 0
    while menor < maior:
        menor += c
        maior -= c
        cont += 1
    print(cont)