#include <bits/stdc++.h>

using namespace std;

long long kadane(vector<int> &a, int n, int custo){
    int maior_atual = 0, maior_total = INT_MIN;
    for (int i = 0; i < n; i++){
        maior_atual += a[i] - custo;
        if (maior_atual < 0){
            maior_atual = 0;
        }
        maior_total = max(maior_atual, maior_total);
    }
    return maior_total;
}

int main(){
    int n, custoDia;
    while (cin >> n){
        cin >> custoDia;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << kadane(a, n, custoDia) << "\n";
    }
    return 0;
}