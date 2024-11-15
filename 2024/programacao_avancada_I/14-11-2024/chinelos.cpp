#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> p;
    int x;
    int ans = 0;
    for (int i = 0; i < p; i++){
        cin >> x;
        if (a[x] > 0){
            a[x]--;
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}