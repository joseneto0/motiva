n, q = map(int, input().split())
l = list(map(int, input().split()))
prefix_max = [0] * n
sufix_max = [0] * n
prefix_max[0] = l[0]
for i in range(1, n):
    prefix_max[i] = max(prefix_max[i-1], l[i])
sufix_max[n-1] = l[n-1]
for i in range(n-2, -1, -1):
    sufix_max[i] = max(sufix_max[i+1], l[i])
for i in range(q):
    p = int(input())
    p -= 1
    if p == 0:
        print(-1, sufix_max[p+1])
    elif p == n-1:
        print(prefix_max[p-1], -1)
    else:
        print(prefix_max[p-1], sufix_max[p+1])