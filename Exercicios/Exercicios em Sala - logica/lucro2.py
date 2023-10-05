n = int(input())
l = list(map(int, input().split()))
menor = 0
maior = 0
for i in range(n):
    if (i == 0):
        menor = l[i]
    else:
        if (l[i] < menor):
            menor = l[i]
    maior = max(maior, abs(menor - l[i]))
print(maior)