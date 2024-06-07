#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, m, a;
    cin >> t >> m >> a;
    int ans = 0, aux;
    while (t < a){
        aux = t;
        t *= m;
        t += aux;
        ans++;
    }   
    cout << ans << "\n";
    return 0;
}