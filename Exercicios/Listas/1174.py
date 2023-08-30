a = []
for i in range(100):
    n = float(input())
    a.append(n)
for i in range(100):
    if a[i] <= 10:
        print(f"A[{i}] = {a[i]:.1f}")