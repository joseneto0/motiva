#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (b - a == c - b){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main(){
    ios;
    int t = 1;
	// cin >> t;
	while (t--){
		solve();
	}
    return 0;
}