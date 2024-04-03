t = int(input())
for i in range(t):
    n = int(input())
    r = 0
    if n == 0:
        r = 0
    elif n == 1 or n == 2:
        r = 1
    else:
        ultimo = penultimo = 1
        for i in range(2, n):
            prox = ultimo + penultimo
            penultimo = ultimo
            ultimo = prox
        r = prox
    print(f"Fib({n}) = {r}")