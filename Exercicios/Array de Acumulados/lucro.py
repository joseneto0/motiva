n = int(input())
l = list(map(int, input().split()))
menor = 0
menores = []
for i in range(n):
    if (i == 0):
        menor = l[i]
    else:
        if (l[i] < menor):
            menor = l[i]
    menores.append(abs(menor - l[i]))
print(max(menores))