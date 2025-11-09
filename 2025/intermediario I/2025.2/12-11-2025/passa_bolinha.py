import sys
sys.setrecursionlimit(10**6)

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

def isValid(x, y, paiX, paiY, adj, vis, n):
    if (x < 0 or x >= n or y < 0 or y >= n or vis[x][y] or adj[x][y] < adj[paiX][paiY]):
        return False
    return True

def dfs(x, y, grafo, vis, n, ans):
    vis[x][y] = True
    ans += 1
    for d in range(4):
        if isValid(x + dx[d], y + dy[d], x, y, grafo, vis, n):
            ans = dfs(x + dx[d], y + dy[d], grafo, vis, n, ans)
    return ans

n = int(input())
x, y = map(int, input().split())
adj = [list(map(int, input().split())) for _ in range(n)]
vis = [[False] * n for _ in range(n)]
x -= 1
y -= 1
ans = 0
ans = dfs(x, y, adj, vis, n, ans)
print(ans)