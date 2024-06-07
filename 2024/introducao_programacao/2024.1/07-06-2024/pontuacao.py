e = int(input())
a = int(input())
c = int(input())
soma = (e * 2) + (a * 3) + (c * 5)
if soma >= 200:
    print("O")
elif soma >= 150:
    print("S")
elif soma >= 100:
    print("B")
else:
    print("N")