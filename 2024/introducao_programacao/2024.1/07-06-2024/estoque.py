m, n = map(int, input().split())
matriz = []
for i in range(m):
    matriz.append(list(map(int, input().split())))
p = int(input())
ans = 0
for i in range(p):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    if (matriz[x][y] > 0):
        matriz[x][y] -= 1
        ans += 1
print(ans)