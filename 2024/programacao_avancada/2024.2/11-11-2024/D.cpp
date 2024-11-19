#include <bits/stdc++.h>

using namespace std;

#define int long long int

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<string, bool> mp;
    for (int i = n-1; i >= 0; i--){
        if (!mp[a[i]]){
            cout << a[i] << '\n';
            mp[a[i]] = true;
        }
    }   
    return 0;
}