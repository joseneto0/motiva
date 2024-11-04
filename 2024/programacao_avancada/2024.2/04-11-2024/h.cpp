#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int prefix = 0, ans = 0;
    map<int, int> soma;
    soma[0] = 1;
    for (auto i: a){
        prefix += i;
        ans += soma[prefix - x];
        soma[prefix]++;
    }
    cout << ans << "\n";
    return 0;
}