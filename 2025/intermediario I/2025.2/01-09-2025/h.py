n = int(input())
a = [0] * n
aux = list(map(int, input().split()))
soma = sum(aux)
soma_total = n * (n + 1) // 2
print(soma_total - soma)