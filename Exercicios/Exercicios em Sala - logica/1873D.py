def solve():
    n, k = map(int, input().split())
    a = input()
    s = []
    for i in a:
        s.append(i)
    trocou = cont = 0
    aux = k
    for i in range(n):
        if s[i] == "B":
            j = i
            while (aux > 0):
                if (s[j] == "B"):
                    s[j] = "W"
                    trocou += 1
                if (j < n-1):
                    j += 1
                else:
                    break
                aux -= 1
            if (trocou > 0):
                cont += 1
            trocou = 0
            aux = k
    print(cont)

t = int(input())
while (t > 0):
    solve()
    t -= 1