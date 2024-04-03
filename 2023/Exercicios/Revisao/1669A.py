t = int(input())
for i in range(t):
    n = int(input())
    if n <= 1399:
        print("Division 4")
    elif n <= 1599:
        print("Division 3")
    elif n <= 1899:
        print("Division 2")
    else:
        print("Division 1")