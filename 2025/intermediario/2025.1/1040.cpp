#include <bits/stdc++.h>

using namespace std;

int main(){
    double nota1, nota2, nota3, nota4, notaExame, media;
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / (2 + 3 + 4 + 1);
    cout << fixed << setprecision(1);
    cout << "Media: "<< media << "\n";
    if (media >= 7.0){
        cout << "Aluno aprovado." << "\n";
    } else if (media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame." << "\n";
        cin >> notaExame;
        cout << "Nota do exame: " << notaExame << "\n";
        media = (media + notaExame) / 2;
        if (notaExame >= 5.0){
            cout << "Aluno aprovado." << "\n";
            cout << "Media final: " << media << "\n";
        } else {
            cout << "Aluno reprovado." << "\n";
            cout << "Media final: " << media << "\n";
        }
    } else {
        cout << "Aluno reprovado." << "\n";
    }

    return 0;
}
