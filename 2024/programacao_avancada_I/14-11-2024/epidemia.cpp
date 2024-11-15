#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r, p;
    cin >> n >> r >> p;
    int ans = 0, soma = n;
    while (n < p){
        soma *= r;
        ans++;
        n += soma;
    }
    cout << ans << endl;
    return 0;
}