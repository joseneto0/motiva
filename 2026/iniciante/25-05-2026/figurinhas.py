n, c, m = map(int, input().split())
x = list(map(int, input().split()))
mp = {}
for i in x:
    if i in mp:
        mp[i] += 1
    else:
        mp[i] = 1
y = list(map(int, input().split()))
for i in y:
    if i in mp:
        mp[i] -= 1

ans = 0
for i in x:
    if i in mp and mp[i] > 0:
        ans += 1
print(ans)