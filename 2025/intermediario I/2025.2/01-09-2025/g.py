memo = {}

def rec(x):
    if x < 2:
        return x
    if x in memo:
        return memo[x]
    soma = 0
    if x % 2 == 0:
        soma += rec(x // 2) + rec(x // 2)
    else:
        soma += rec(x // 2) + rec(x // 2 + 1)

    memo[x] = soma + x
    return memo[x]

n = int(input())
print(rec(n) - n)