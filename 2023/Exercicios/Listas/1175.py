l = [0] * 20
for i in range(19, -1, -1):
    l[i] = int(input())
for i in range(20):
    print(f"N[{i}] = {l[i]}")