#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x = a[n-1] - a[0];
    int y = a[n-2] - a[1];
    cout << x + y << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}