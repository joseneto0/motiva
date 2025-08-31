n = int(input())
divisores = []
for i in range(1, 10):
    if n % i == 0:
        divisores.append(i)
t = len(divisores)
a = False
for i in range(n+1):
    for j in range(t):
        if i % (n / divisores[j]) == 0:
            print(divisores[j], end="")
            a = True
            break
    if not a:
        print("-", end="")
    a = False
