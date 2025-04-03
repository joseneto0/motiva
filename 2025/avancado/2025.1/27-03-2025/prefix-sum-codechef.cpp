#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<ll> prefix_sum(n+1, 0);
    for (int i = 1; i <= n; i++){
        prefix_sum[i] = prefix_sum[i-1] + v[i-1];
    }
    int q;
    cin >> q;
    int l, r;
    while (q--){
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l-1] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}