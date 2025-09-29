n, k = map(int, input().split())
a = list(map(int, input().split()))
l = 1
r = 10**18
ans = 0
while l < r:
    meio = l + (r - l) // 2
    count = 1
    possivel = True
    soma = 0
    for i in range(n):
        if a[i] > meio:
            possivel = False
            break

        if soma + a[i] <= meio:
            soma += a[i]
        else:
            count += 1
            soma = a[i]

    if not possivel or count > k:
        l = meio + 1
    else:
        r = meio
        ans = meio

print(ans)