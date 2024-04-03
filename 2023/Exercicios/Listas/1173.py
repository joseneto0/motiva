n = int(input())
l = []
for i in range(10):
    l.append(n)
    n *= 2
for i in range(10):
    print(f"N[{i}] = {l[i]}")