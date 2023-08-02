k, n, w = map(int, input().split())
soma = 0
for i in range(1, w+1):
    soma += (i * k)
if soma < n:
    print(0)
else:
    print(soma - n)