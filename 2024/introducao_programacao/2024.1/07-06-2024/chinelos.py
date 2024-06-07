n = int(input())
a = [0] * (n+1)
for i in range(1, n+1):
    a[i] = int(input())
p = int(input())
ans = 0
for i in range(p):
    aux = int(input())
    if a[aux] > 0:
        ans += 1
        a[aux] -= 1
print(ans)