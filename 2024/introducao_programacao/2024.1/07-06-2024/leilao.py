n = int(input())
a = []
for i in range(n):
    nome = input()
    v = int(input())
    a.append([v, nome])
idx = -1
maior = 0
for i in range(n):
    if (a[i][0] > maior):
        maior = a[i][0]
        idx = i
print(a[idx][1])
print(a[idx][0])