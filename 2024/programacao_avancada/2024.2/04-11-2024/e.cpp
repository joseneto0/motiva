#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = a[n-1] - a[0];
    for (auto i = 0; i < n-1; i++){
        ans = max(ans, a[i] - a[i+1]);
    }
    int menor = INT_MAX;
    for (auto i = 0; i < n; i++){
        menor = min(menor, a[i]);   
    }
    ans = max(ans, a[n-1] - menor);
    int maior = -1;
    for (auto i = 0; i < n; i++){
        maior = max(maior, a[i]);
    }
    ans = max(ans, maior - a[0]);
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}