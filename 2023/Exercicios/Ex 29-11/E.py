n = int(input())
dicio = {}
for _ in range(n):
    s = input()
    if s not in dicio:
        dicio[s] = 0
        print("OK")
    else:
        dicio[s] += 1
        print(f"{s}{dicio[s]}")