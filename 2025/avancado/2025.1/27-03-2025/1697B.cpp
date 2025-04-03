#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + p[i-1];
    }
    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << pref[n - x + y] - pref[n - x] << endl;
    }
    return 0;
}