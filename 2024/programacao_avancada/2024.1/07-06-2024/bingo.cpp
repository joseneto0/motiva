#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, u, aux;
    cin >> n >> k >> u;
    vector<vector<int>> a(u+1);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> aux;
            a[aux].push_back(i+1);
        }
    }
    vector<int> tempos(n+1, 0);
    set<int> x;
    for (int i = 0; i < u && x.empty(); i++){
        cin >> aux;
        for (int j: a[aux]){
            if (tempos[j]++ == k){
                x.insert(j);
            }
        }
    }
    for (int i: x){
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}