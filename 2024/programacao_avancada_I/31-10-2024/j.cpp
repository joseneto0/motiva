#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int aux, contZero=0;
    int maior=0;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux == 0){
            contZero++;
        } else{
            maior = max(maior, contZero);
            contZero = 0;
        }
    }
    maior = max(maior,contZero);
    cout << maior << '\n';
}

int main(void){
    int t; 
    cin >> t; 
    while(t--){
        solve();
    }
}