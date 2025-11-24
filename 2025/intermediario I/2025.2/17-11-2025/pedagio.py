from collections import deque

def bfs(start, adj, vis, dist):
    q = deque([start])
    vis[start] = True
    while q:
        f = q.popleft()
        for x in adj[f]:
            if not vis[x]:
                vis[x] = True
                dist[x] = dist[f] + 1
                q.append(x)

def main():
    teste = 1
    while True:
        c, e, l, p = map(int, input().split())
        if c == 0 and e == 0 and l == 0 and p == 0:
            break

        adj = [[] for _ in range(c + 1)]
        vis = [False] * (c + 1)
        dist = [0] * (c + 1)

        for _ in range(e):
            x, y = map(int, input().split())
            adj[x].append(y)
            adj[y].append(x)

        bfs(l, adj, vis, dist)

        ans = set()
        for i in range(1, c + 1):
            if dist[i] > 0 and dist[i] <= p:
                ans.add(i)

        print(f"Teste {teste}")
        for node in sorted(ans):
            if node != l:
                print(node, end=" ")
        print("\n")
        teste += 1

if __name__ == "__main__":
    main()
