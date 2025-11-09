import sys
sys.setrecursionlimit(10**6)

def dfs(start, grafo, vis):
    stack = [start]
    vis[start] = True
    while stack:
        u = stack.pop()
        for v in grafo[u]:
            if not vis[v]:
                vis[v] = True
                stack.append(v)

n, m = map(int, sys.stdin.readline().split())
grafo = [[] for _ in range(n + 1)]
vis = [False] * (n + 1)

for _ in range(m):
    i, j = map(int, sys.stdin.readline().split())
    grafo[i].append(j)
    grafo[j].append(i)

pares = []
for i in range(1, n + 1):
    if not vis[i]:
        dfs(i, grafo, vis)
        pares.append(i)

print(len(pares) - 1)
for i in range(len(pares) - 1):
    print(pares[i], pares[i + 1])
