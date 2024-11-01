#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k, aux, j, qtdB=0, cont=0;
    cin >> n >> k;
    aux = k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            j = i;
            while (aux--){
                if (s[j] == 'B'){
                    qtdB++;
                    s[j] = 'W';
                }
                j++;
            }
            if (qtdB > 0){
                cont++;
            }
            qtdB=0;
            aux = k;
        }
    }
    cout << cont << '\n';
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}