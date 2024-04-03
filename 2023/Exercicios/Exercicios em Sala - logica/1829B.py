def solve():
    n = int(input())
    a = list(map(int, input().split()))
    cont = maior = 0
    for i in a:
        if i == 0:
            cont += 1
        else:
            maior = max(cont, maior)
            cont = 0
    maior = max(cont, maior)
    print(maior)

t = int(input())
while (t > 0):
    solve()
    t -= 1