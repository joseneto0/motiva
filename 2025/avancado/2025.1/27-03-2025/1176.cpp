#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> v = {0, 1};
    for (int i = 2; i <=n; i++){
        v.push_back(v[i-1] + v[i-2]);
    }
    cout << "Fib(" << n << ") = " << v[n] << '\n';
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