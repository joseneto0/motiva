l = [0] * 10
for i in range(10):
    entrada = int(input())
    if entrada <= 0:
        l[i] = 1
    else:
        l[i] = entrada
for i in range(10):
    print(f"X[{i}] = {l[i]}")
