x, y = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
j = 0
for i in range(x):
    if j == y:
        break
    if a[i] == b[j] and j < y:
        j += 1
if j == y:
    print("S")
else:
    print("N")