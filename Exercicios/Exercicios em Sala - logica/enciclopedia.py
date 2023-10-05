m, n = map(int, input().split())
dicio = {}
for i in range(m):
    l = list(input().split())
    for j in range(n):
        dicio[l[j]] = i+1
q = int(input())
for i in range(q):
    s = input()
    print(s, dicio[s])