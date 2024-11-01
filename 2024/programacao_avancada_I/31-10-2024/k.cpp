#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int m;
    string binario;
    int menor_meio = INT_MAX, menor_esquerda = INT_MAX, menor_direita = INT_MAX;
    bool esquerda = false, direita = false, meio = false;
    for (int i = 0; i < n; i++){
        cin >> m >> binario;
        if (binario == "11"){
            meio = true;
            menor_meio = min(m, menor_meio);
        } else if (binario == "10"){
            esquerda = true;
            menor_esquerda = min(m, menor_esquerda);
        } else if (binario == "01") {
            direita = true;
            menor_direita = min(m, menor_direita);
        }
    }
    int resp;
    if (direita && esquerda && meio){
        resp = min(menor_direita + menor_esquerda, menor_meio);
        if (resp < menor_meio){
            meio = false;
        }
    }
    if (meio){
        cout << menor_meio << '\n';
    } else if (direita && esquerda){
        cout << (menor_direita + menor_esquerda) << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main(void){
    int t; 
    cin >> t; 
    while(t--){
        solve();
    }
}