from collections import deque

n = int(input())
for _ in range(n):
    s = input()
    pilha = deque()
    cont = 0
    for i in s:
        if (i == "<"):
            pilha.append(i)
        elif (i == ">"):
            if (len(pilha) > 0):
                cont += 1
                pilha.pop()
    print(cont)
