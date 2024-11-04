#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1), preff(n+1);
    preff[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        preff[i] = preff[i-1] + a[i];
    }
    int l, r;
    for (int i = 0; i < q; i++){
        cin >> l >> r;
        cout << preff[r] - preff[l-1] << "\n";
    }
    return 0;
}