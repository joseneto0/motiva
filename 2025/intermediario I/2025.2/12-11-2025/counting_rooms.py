dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

def isValid(x, y, n, m, matriz, vis):
    if x < 0 or x >= n or y < 0 or y >= m or matriz[x][y] == '#' or vis[x][y]:
        return False
    return True

def dfs(x, y, n, m, matriz, vis):
    stack = [(x, y)]
    vis[x][y] = True
    while stack:
        i, j = stack.pop()
        for d in range(4):
            ni, nj = i + dx[d], j + dy[d]
            if isValid(ni, nj, n, m, matriz, vis):
                vis[ni][nj] = True
                stack.append((ni, nj))

n, m = map(int, input().split())
matriz = [list(input().strip()) for _ in range(n)]
vis = [[False for _ in range(m)] for _ in range(n)]

cont = 0
for i in range(n):
    for j in range(m):
        if not vis[i][j] and matriz[i][j] == '.':
            cont += 1
            dfs(i, j, n, m, matriz, vis)

print(cont)
