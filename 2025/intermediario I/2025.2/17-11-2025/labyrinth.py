from collections import deque

def bfs(start_i, start_j, grid, n, m):
    vis = [[False]*m for _ in range(n)]
    parent = [[None]*m for _ in range(n)]
    directions = [(-1,0), (1,0), (0,-1), (0,1)]
    q = deque()
    q.append((start_i, start_j))
    vis[start_i][start_j] = True
    parent[start_i][start_j] = (-1, -1)

    while q:
        x, y = q.popleft()
        if grid[x][y] == 'B':
            # Reconstruir caminho
            path = []
            while (x,y) != (-1,-1):
                path.append((x,y))
                x, y = parent[x][y]
            path.reverse()
            print("YES")
            print(len(path) - 1)
            # Mostrar movimentos
            moves = []
            for i in range(1, len(path)):
                px, py = path[i-1]
                cx, cy = path[i]
                if cx == px - 1:
                    moves.append('U')
                elif cx == px + 1:
                    moves.append('D')
                elif cy == py - 1:
                    moves.append('L')
                elif cy == py + 1:
                    moves.append('R')
            print(''.join(moves))
            return

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and not vis[nx][ny] and grid[nx][ny] != '#':
                vis[nx][ny] = True
                parent[nx][ny] = (x, y)
                q.append((nx, ny))

    print("NO")

def main():
    n, m = map(int, input().split())
    grid = [list(input().strip()) for _ in range(n)]

    start_i = start_j = 0
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 'A':
                start_i, start_j = i, j
                break

    bfs(start_i, start_j, grid, n, m)

if __name__ == "__main__":
    main()
