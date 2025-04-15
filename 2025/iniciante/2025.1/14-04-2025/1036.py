a, b, c = map(float, input().split())
delta = b**2 - 4 * a * c
if a > 0 and delta > 0:
    r1 = (-b + delta**0.5) / (2 * a)
    r2 = (-b - delta**0.5) / (2 * a)
    print(f"R1 = {r1:.5f}")
    print(f"R2 = {r2:.5f}")
else:
    print("Impossivel calcular")
