//1915B - codeforces
#include <bits/stdc++.h>

using namespace std;

void solve(){
    char aux;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++){
        for (int j =0 ; j < 3; j++){
            cin >> aux;
            if (aux == 'A') a++;
            else if (aux == 'B') b++;
            else if (aux == 'C') c++;
        }
    }
    int menor = min({a, b, c});
    if (menor == a) cout << "A" << "\n";
    else if (menor == b) cout << "B" << "\n";
    else cout << "C" << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}