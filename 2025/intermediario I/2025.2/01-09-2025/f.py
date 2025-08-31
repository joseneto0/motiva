q = int(input())
a = []
for i in range(q):
    o, x = list(map(int, input().split()))
    if o == 1:
        a.append(x)
    else:
        print(a[len(a)-x])
