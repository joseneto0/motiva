from collections import deque

while True:
    try:
        s = input()
        pilha = deque()
        certo = True
        for i in s:
            if i == '(':
                pilha.append(i)
            elif i == ')':
                if len(pilha) > 0:
                    pilha.pop()
                else:
                    certo = False
                    break
        
        if len(pilha) == 0 and certo:
            print('correct')
        else:
            print('incorrect')

    except EOFError:
        break