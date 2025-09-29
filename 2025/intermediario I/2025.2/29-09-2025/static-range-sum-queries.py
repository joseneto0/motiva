n, q = map(int, input().split())
l = list(map(int, input().split()))
prefix = [0] * (n + 1)
for i in range(1, n + 1):
    prefix[i] = prefix[i - 1] + l[i - 1]
for i in range(q):
    a, b = map(int, input().split())
    print(prefix[b] - prefix[a - 1])