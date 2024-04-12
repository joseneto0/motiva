//1915A - codeforces
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b){
        cout << c << "\n";
    } else if (a == c){
        cout << b << "\n";
    } else {
        cout << a << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}