a, b, c = map(float, input().split())
if abs(b-c) < a < b + c and abs(a-c) < b < a + c and abs(a-b) < c < a + b:
    perimetro = a + b + c
    print(f"Perimetro = {perimetro:.1f}")
else:
    area = ((a + b) * c) / 2
    print(f"Area = {area:.1f}")