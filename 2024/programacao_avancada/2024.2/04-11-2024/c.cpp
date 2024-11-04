#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, p, v, t, cont=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p >> v >> t;
        if (p+v+t > 1){
            cont++;
        }
    }
    cout << cont << '\n';
    return 0;
}