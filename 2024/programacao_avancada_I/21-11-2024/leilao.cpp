#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> a(n);
    int maior = 0;
    string nome;
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
        if (a[i].second > maior){
            maior = a[i].second;
            nome = a[i].first;
        }
    }
    cout << nome << "\n";
    cout << maior << "\n";
    return 0;
}