#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> &a, int n, bool todos_negativos) {
    int maior_atual = 0, maior_total = INT_MIN;
    bool atual, anterior;
    for (int i = 0; i < n; i++){
        atual = (a[i] % 2 == 0);
        if (i > 0){
            if (atual == anterior){
                maior_atual = 0;
            }
        }
        if (todos_negativos){
            maior_atual = a[i];
        } else maior_atual += a[i];
        if (!todos_negativos){
            if (maior_atual < 0){
                maior_atual = 0;
            }
        }
        maior_total = max(maior_atual, maior_total);
        anterior = atual;
    }
    return maior_total;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    bool todos_negativos = false, intercalados = false;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] < 0 && !intercalados){
            todos_negativos = true;
        } else {
            todos_negativos = false;
            intercalados = true;
        }
    }
    cout << kadane(a, n, todos_negativos) << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}