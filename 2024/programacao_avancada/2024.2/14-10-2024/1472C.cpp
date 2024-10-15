#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> a, memo;

int precalc(int x){
    if (x > n){
        return 0;
    }
    if (memo[x] == -1){
        memo[x] = a[x] + precalc(x + a[x]);
    }
    return memo[x];
}

void solve(){
    cin >> n;
    a.assign(n+1, 0);
    memo.assign(n+1, -1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }  
    int ans = 0;
    for (int i = 1; i <= n; i++){
        ans = max(ans, precalc(i));
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}