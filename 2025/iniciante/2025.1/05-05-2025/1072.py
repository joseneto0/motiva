n = int(input())
contadorIn = 0
contadorOut = 0
for i in range(n):
    x = int(input())
    if x >= 10 and x <= 20:
        contadorIn += 1
    else:
        contadorOut += 1
print(f"{contadorIn} in")
print(f"{contadorOut} out")
