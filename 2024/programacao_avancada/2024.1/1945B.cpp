//1945B - codeforces
#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long a, b, m;
    cin >> a >> b >> m;
    cout << 2 + m / b + m / a << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}