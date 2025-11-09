import sys
sys.setrecursionlimit(10**6)

def dfs(u, grafo, vis):
    vis[u] = True
    cont = 0
    for v in grafo[u]:
        if not vis[v]:
            cont += dfs(v, grafo, vis) + 2
    return cont

def solve():
    n = int(input())
    v, a = map(int, input().split())
    grafo = [[] for _ in range(v)]
    vis = [False] * v
    for _ in range(a):
        x, y = map(int, input().split())
        grafo[x].append(y)
        grafo[y].append(x)

    cont = dfs(n, grafo, vis)
    print(cont)

t = int(input())
for _ in range(t):
    solve()
