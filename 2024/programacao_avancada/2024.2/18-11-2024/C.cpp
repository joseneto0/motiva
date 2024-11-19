#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x > y){
        swap(x, y);
    }
    int ans1 = 0, ans2 = 0;
    ans1 = x * a + y * a;
    int z = y - x;
    ans2 = z * a + x * b;
    int ans = min(ans1, ans2);
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}