from random import choice
arquivo = open("palavras.txt", "r")
l = []
for i in arquivo:
    if '\n' in i:
        i = i[:-1]
    l.append(i)
palavra_escolhida = choice(l)
lista_escolhida = []
tamanho = len(palavra_escolhida)
palavra = []
for i in palavra_escolhida:
    if i != " ":
        palavra.append("_")
    else:
        palavra.append(" ")
    lista_escolhida.append(i)
cont = 1
while True:
    achou = False
    if cont == 7:
        print("Você perdeu :C")
        print(f"A palavra era: {palavra_escolhida}")
        break
    elif palavra == lista_escolhida:
        print(f"Parabéns, você ganhou!!")
        print(f"Você só precisou de {cont} rodadas")
        break
    letra = input("Digite uma letra: ")
    letra = letra.lower()
    if len(letra) > 1:
        print("Digite apenas uma letra")
        continue
    if letra in palavra:
        print(f"Você já digitou essa palavra :)")
        continue
    for i in range(tamanho):
        if letra == palavra_escolhida[i]:
            palavra[i] = letra
            achou = True
    if achou:
        print("A palavra é:", *palavra)
    else:
        print(f"-> Você errou pela {cont}° vez. Tente Novamente")
        cont += 1