#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int ans = 0;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++){
        int x;
        cin >> x;
        if (a[x] > 0){
            a[x] -= 1;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}