from random import choice
arquiv = open("palavras.txt", "r")
l = []
for i in arquiv:
    if "\n" in i:
        i = i[:-1]
    l.append(i)
escolha = choice(l)
palavra = "_" * len(escolha)
achou = False
cont = 0
achados = []
while True:
    if cont == 6:
        print("Você perdeu :c")
        break
    if palavra == escolha:
        print("Você venceu! :D")
        break
    letra = input("Digite uma letra: ")
    if letra in palavra:
        print(f"Você já achou essa letra. Digite outra")
        continue
    for i in range(len(escolha)):
        if escolha[i] == letra:
            palavra = palavra[:i] + letra + palavra[i+1:]
            achou = True
    if not achou:
        cont += 1
        print(f"Você errou pela {cont}° vez. Tente de novo!")
    print(f"A palavra é: {palavra}")
    achou = False