palavras = set()
alfabeto = "abcdefghijklmnopqrstuvwxyz"
while True:
    try:
        palavra_atual = ""
        s = input().lower()
        print(s)
        for i in s:
            if i in alfabeto:
                palavra_atual += i
            else:
                if palavra_atual != "":
                    palavras.add(palavra_atual)
                palavra_atual = ""
        if palavra_atual != "":
            palavras.add(palavra_atual)
    except EOFError:
        for i in palavras:
            print(i)
        break