n = int(input())
total = 0
for i in range(n):
    a, b = map(int, input().split())
    if a > b:
        total += b
print(total)