t = float(input())
i = 0
for i in range(100):
    print(f"N[{i}] = {t:.4f}")
    i += 1
    t /= 2
    if (t < 0):
        t = 0.0000
