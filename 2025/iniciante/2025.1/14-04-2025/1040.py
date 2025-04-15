N1, N2, N3, N4 = map(float, input().split())
media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10
if media >= 7.0:
    print(f'Media: {media:.1f}')
    print('Aluno aprovado.')
elif media < 5.0:
    print(f'Media: {media:.1f}')
    print('Aluno reprovado.')
else:
    print(f'Media: {media:.1f}')
    print('Aluno em exame.')
    notaexame = float(input())
    print(f'Nota do exame: {notaexame:.1f}')
    mediafinal = (notaexame + media) / 2
    if mediafinal >= 5.0:
        print('Aluno aprovado.')
        print(f'Media final: {mediafinal:.1f}')
    else:
        print('Aluno reprovado.')
        print(f'Media final: {mediafinal:.1f}')