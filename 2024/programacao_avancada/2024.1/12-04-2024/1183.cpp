#include <bits/stdc++.h>

using namespace std;

int main(){
    double m[12][12];
    char o;
    cin >> o;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }
    double soma = 0, qntd = 0, cont = 1;
    for (int i = 0; i < 11; i++){
        for (int j = cont; j < 12; j++){
            soma += m[i][j];
            qntd++;
        }
        cont++;
    }
    if (o == 'S'){
        cout << fixed << setprecision(1) << soma << "\n";
    } else {
        cout << fixed << setprecision(1) << soma / qntd << "\n";
    }
    return 0;
}