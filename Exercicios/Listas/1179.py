par = []
impar = []
for i in range(15):
    n = int(input())
    if n % 2 == 0:
        if len(par) == 5:
            for i in range(5):
                print(f"par[{i}] = {par[i]}")
            par.clear()
        par.append(n)
    else:
        if len(impar) == 5:
            for i in range(5):
                print(f"impar[{i}] = {impar[i]}")
            impar.clear()
        impar.append(n)
for i in range(len(impar)):
    print(f"impar[{i}] = {impar[i]}")
for i in range(len(par)):
    print(f"par[{i}] = {par[i]}") 