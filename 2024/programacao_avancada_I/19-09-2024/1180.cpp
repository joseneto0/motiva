#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, menor = INT_MAX, idx;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] < menor){
            menor = a[i];
            idx = i;
        }
    }
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << idx << "\n";
    return 0;
}
