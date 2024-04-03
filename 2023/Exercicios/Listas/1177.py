t = int(input())
l = []
c = 0
for i in range(1000):
    if (c == t):
        c = 0
    l.append(c)
    c += 1
for i in range(1000):
    print(f"N[{i}] = {l[i]}")