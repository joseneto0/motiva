#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, aux, pares = 0, impares = 0;
    cin >> n;
    while (n--){
        cin >> aux;
        if (aux % 2 == 0) pares+= aux;
        else impares+= aux;
    }
    if (pares > impares ){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main(void){
    int t; 
    cin >> t; 
    while(t--){
        solve();
    }
}