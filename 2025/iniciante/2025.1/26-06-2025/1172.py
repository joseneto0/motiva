l = []
for i in range(10):
    x = int(input())
    if (x <= 0):
        l.append(1)
    else:
        l.append(x)

for i in range(10):
    print(f"X[{i}] = {l[i]}")