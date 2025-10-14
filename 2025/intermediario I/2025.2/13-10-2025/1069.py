from collections import deque

n = int(input())
for _ in range(n):
    s = input()
    pilha = deque()
    ans = 0
    for i in s:
        if i == '<':
            pilha.append(i)
        elif i == '>' and len(pilha) > 0:
            pilha.pop()
            ans += 1
    
    print(ans)