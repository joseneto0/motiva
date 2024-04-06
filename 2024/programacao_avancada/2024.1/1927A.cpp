//1927A - Codeforces
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int primeiro = INT_MAX, ultimo;
    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            primeiro = min(primeiro, i);
            ultimo = i;
        }
    }
    int cont = 0;
    for (int i = primeiro; i <= ultimo; i++){
        cont++;
    }
    cout << cont << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}