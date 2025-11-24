from collections import deque
import sys

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

def is_valid(x, y, n, m, vis):
    if x < 0 or x >= n or y < 0 or y >= m or vis[x][y]:
        return False
    return True

def bfs(sI, sJ, adj, vis, dist, n, m):
    q = deque()
    q.append((sI, sJ))
    dist[sI][sJ] = 0

    while q:
        fx, fy = q.popleft()
        vis[fx][fy] = True
        for d in range(4):
            nx, ny = fx + dx[d], fy + dy[d]
            if is_valid(nx, ny, n, m, vis) and dist[nx][ny] > dist[fx][fy] + 1:
                dist[nx][ny] = dist[fx][fy] + 1
                q.append((nx, ny))

def main():
    input = sys.stdin.readline
    n, m = map(int, input().split())
    adj = [list(map(int, input().split())) for _ in range(n)]
    vis = [[False]*m for _ in range(n)]
    dist = [[float('inf')]*m for _ in range(n)]

    sI = sJ = 0
    saidas = []

    for i in range(n):
        for j in range(m):
            if adj[i][j] == 3:
                sI, sJ = i, j
            elif adj[i][j] == 2:
                vis[i][j] = True
            elif adj[i][j] == 0:
                saidas.append((i,j))

    bfs(sI, sJ, adj, vis, dist, n, m)

    ans = float('inf')
    for x, y in saidas:
        ans = min(ans, dist[x][y])

    print(ans if ans != float('inf') else -1)

if __name__ == '__main__':
    main()
