#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll i = 0, j = n-1, cont = 0;
    while (i < j){
        if (a[i] > a[j]){
            a[j-1] += a[j];
            j--;
            cont++;
        } else if (a[i] < a[j]) { 
            a[i+1] += a[i];
            i++;
            cont++;
        } else {
            i++;
            j--;
        }
    }
    cout << cont << "\n";
    return 0;
}