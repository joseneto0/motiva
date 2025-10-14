from collections import deque

while True:
    n = int(input())
    if n == 0:
        break
    fila = deque()
    for i in range(1, n+1):
        fila.append(i)

    descartados = []
    while len(fila) >= 2:
        descartados.append(str(fila.popleft()))
        fila.append(fila.popleft())
    
    print(f"Discarded cards: {', '.join(descartados)}")
    print(f"Remaining card: {fila[0]}")