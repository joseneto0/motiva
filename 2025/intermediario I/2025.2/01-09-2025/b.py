n = int(input())
valores = list(map(int, input().split()))
valores.sort()
diferenca = []
for i in range(n-1):
    diferenca.append(abs(valores[i] - valores[i+1]))
print(valores[diferenca.index(2)]+1)