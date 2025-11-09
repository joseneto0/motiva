import sys
sys.setrecursionlimit(10**6)

def dfs(u, grafo, vis):
    vis[u] = True
    for v in grafo[u]:
        if not vis[v]:
            dfs(v, grafo, vis)

n, m = map(int, input().split())
grafo = [[] for _ in range(n + 1)]
vis = [False] * (n + 1)
for _ in range(m):
    i, j = map(int, input().split())
    grafo[i].append(j)
    grafo[j].append(i)
    m -= 1

times = 0
for i in range(1, n + 1):
    if not vis[i]:
        dfs(i, grafo, vis)
        times += 1

print(times)