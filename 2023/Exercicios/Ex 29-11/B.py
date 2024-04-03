t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    a[0] += 1
    m = 1
    for i in a:
        m *= i
    print(m)