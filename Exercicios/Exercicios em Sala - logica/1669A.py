def solve():
    rating = int(input())
    if rating <= 1399:
        print("Division 4")
    elif rating <= 1599:
        print("Division 3")
    elif rating <= 1899:
        print("Division 2")
    else:
        print("Division 1")


t = int(input())
while (t > 0):
    solve()
    t -= 1