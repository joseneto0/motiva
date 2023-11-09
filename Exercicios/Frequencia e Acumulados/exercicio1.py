n = int(input())
l = list(map(int, input().split()))
prefix_sum = [0] * n
prefix_sum[0] = l[0]
prefix_max = [0] * n
prefix_max[0] = l[0]
frequencia = [0] * 31
for i in range(n):
    prefix_sum[i] = prefix_sum[i-1] + l[i]
    prefix_max[i] = max(prefix_max[i-1], l[i])
    frequencia[l[i]] += 1
print(f"Média: {prefix_sum[n-1]/n:.2f}")
print(f"Maior: {prefix_max[n-1]}")
print(f"Quantidade: {frequencia[prefix_max[n-1]]}")