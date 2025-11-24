from collections import deque

dRow = [-1, 0, 1, 0]
dCol = [0, 1, 0, -1]

def is_valid(row, col, n, m, matriz, vis):
    if row < 0 or col < 0 or row >= n or col >= m or matriz[row][col] == 0:
        return False
    if vis[row][col]:
        return False
    return True

def bfs(start, n, m, matriz):
    vis = [[False] * m for _ in range(n)]
    q = deque([start])
    vis[start[0]][start[1]] = True
    cont = 0
    
    while q:
        cont += 1
        f = q.popleft()
        if matriz[f[0]][f[1]] == 2:
            return cont
        for i in range(4):
            x = f[0] + dRow[i]
            y = f[1] + dCol[i]
            if is_valid(x, y, n, m, matriz, vis):
                vis[x][y] = True
                q.append((x, y))
    return cont

def main():
    n, m = map(int, input().split())
    matriz = [list(map(int, input().split())) for _ in range(n)]

    inicio = (0, 0)
    for i in range(n):
        for j in range(m):
            if matriz[i][j] == 3:
                inicio = (i, j)
                break

    cont = bfs(inicio, n, m, matriz)
    print(cont)

if __name__ == "__main__":
    main()