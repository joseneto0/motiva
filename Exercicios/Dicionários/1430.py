dicio = {"W": 1, "H": 1/2, "Q": 1/4, "E": 1/8, "S": 1/16, "T": 1/32, "X": 1/64}
while True:
    s = input()
    if s == '*':
        break
    soma = cont = 0
    for i in s:
        if i != "/":
            soma += dicio[i]
        else:
            if soma == 1:
                cont += 1
            soma = 0
    print(cont)