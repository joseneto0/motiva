#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;

void solve(){
    int n, cont = 1;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a[0]++;
    for (int i = 0; i < n; i++){
        cont *= a[i];
    }
    cout << cont << '\n';
    

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}