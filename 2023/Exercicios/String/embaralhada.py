from random import choice, shuffle
from time import sleep
import os
arquivo = open("palavras.txt", "r")
l = []
for i in arquivo:
    if "\n" in i:
        i = i[:-1]
    l.append(i)
escolhida = choice(l)
embaralhada = list(escolhida)
shuffle(embaralhada)
fim = "".join(embaralhada)
print("Bem vindo ao jogo, você tem 6 tentativas para acertar a palavra embaralhada")
sleep(1)
tamanho_palavra = len(escolhida)
sleep(2)
os.system('cls')
for i in range(5, -1, -1):
    print(f"Advinhe a palavra: {fim}")
    s = input("Digite uma palavra: ")
    if s == escolhida:
        print(f"Parabéns!!!\nVocê advinhou a palavra!")
        break
    print(f"Você errou :c\nRestam {i} tentativas")
    sleep(1)
    os.system('cls')