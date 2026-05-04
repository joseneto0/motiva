lista = list(map(int, input().split()))
x = int(input())
qntd = lista.count(x)
if qntd == 0:
    print("Mia x")
else:
    print(qntd)
    indices = []
    for i in range(10):
        if lista[i] == x:
            indices.append(i)

    for i in indices:
        print(i, end=' ')