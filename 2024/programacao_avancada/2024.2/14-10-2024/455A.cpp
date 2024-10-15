#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    int n;
    cin >> n;
    vector<ll> a(100010, 0), memo(100010, 0);
    ll maior = 0;
    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;
        a[x]++;
        maior = max(x, maior);
    }
    memo[0] = 0;
    memo[1] = a[1];
    ll ans = 0;
    for (int i = 2; i <= maior; i++){
        memo[i] = max(memo[i-1], memo[i-2] + a[i] * i);
    }
    cout << memo[maior] << "\n";
    return 0;
}