from collections import deque

n = int(input())
for i in range(n):
    s = input()
    d = deque()
    cont = 0
    for i in s:
        if (i == '<'):
            d.append(i)
        elif (i == '>'):
            if (len(d) > 0):
                cont+= 1
                d.pop()
    print(cont)
