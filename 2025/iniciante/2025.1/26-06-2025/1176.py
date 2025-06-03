fibo = [0, 1]
for i in range(2, 61):
    fibo.append(fibo[i-1] + fibo[i - 2])

t = int(input())
for _ in range(t):
    n = int(input())
    print(f"Fib({n}) = {fibo[n]}")