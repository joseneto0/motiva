#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, n, m;
    bool defeat = false;
    cin >> x >> n >> m;
    while (x > 20 && n > 0){
        x = (x/2) + 10;
        n--;
    }
    while (x > 0 && m > 0){
        x -= 10;
        m--;
    }
    if (x <= 0){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t; 
    while(t--){
        solve();
    }
}