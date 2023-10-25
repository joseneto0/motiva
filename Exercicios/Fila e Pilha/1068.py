from collections import deque

while True:
    try:
        s = input()
        pilha = deque()
        quebrou = False
        for i in s:
            if i == "(":
                pilha.append(i)
            elif i == ")":
                if (len(pilha) > 0):
                    pilha.pop()
                else:
                    quebrou = True
                    break
        if (not quebrou and len(pilha) == 0):
            print("correct")
        else:
            print("incorrect")
    except EOFError:
        break