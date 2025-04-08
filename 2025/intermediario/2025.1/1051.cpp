#include <bits/stdc++.h>

using namespace std;

int main(){
    double valor, imposto;
    cin >> valor;
    if (valor <= 2000){
        cout << "Isento" << "\n";
        return 0;
    } else if (valor <= 3000){
        imposto = (valor - 2000) * 0.08;
    } else if (valor <= 4500){
        imposto = (valor - 3000) * 0.18 + 80;
    } else {
        imposto = (valor - 4500) * 0.28 + 80 + 270;
    }
    cout << fixed << setprecision(2) << "R$ " << imposto << "\n";
    return 0;
}