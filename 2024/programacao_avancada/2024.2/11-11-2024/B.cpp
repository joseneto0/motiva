#include <bits/stdc++.h>

using namespace std;


void solve(vector<int> &a){
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n/2 - 1; i++){
        sum1 += a[i];
    }
    sum1 += a[n];
    for (int i = n/2; i <= n-1; i++){
        sum2 += a[i];
    }
    cout << sum1 - sum2 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    vector<int> a(35);
    for (int i = 1; i <= 35; i++){
        a[i] = pow(2, i);
    }
    while (t--){
        solve(a);
    }    
    return 0;
}