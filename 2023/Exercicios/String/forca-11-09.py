from random import choice
from time import sleep
import os
arquivo = open("palavras.txt", "r")
palavras = []
for i in arquivo:
    if "\n" in i:
        i = i[:-1]
    palavras.append(i)
palavra_escolhida = choice(palavras)
print("Bem vindo ao jogo da forca!!!")
sleep(5)
os.system('cls')
forca = []
palavras_usadas = []
for i in palavra_escolhida:
    forca.append("_")
contador = 6
while True:
    if contador == 0:
        print("Aaaah, você perdeu :c")
        print(f"A palavra era: {palavra_escolhida}")
        break
    if ''.join(forca) == palavra_escolhida:
        print(f"Parabéns!!!! Você venceu!")
        break
    tem = False
    print("Digite 5590 para ver as palavras ja digitadas")
    s = input("Digite uma letra: ")
    if (s == "5590"):
        print(f'As letras que não estão na palavra escolhida e que já foram digitados são: {", ".join(palavras_usadas)}')
        sleep(3)
        os.system("cls")
        continue
    if (len(s) > 1):
        print(f"Digite só uma letra >:(")
        contador -= 1
        print(f"Você perdeu uma vida pelo seu erro, não erres mais :)")
        sleep(5)
        os.system('cls')
        continue
    
    for i in range(len(palavra_escolhida)):
        if s == palavra_escolhida[i]:
            forca[i] = s
            tem = True
    if (tem == False):
        palavras_usadas.append(s)
        contador -= 1
        print(f"Você tem {contador} chances")
    print(f"A palavra é: {' '.join(forca)}")
    sleep(3)
    os.system('cls')