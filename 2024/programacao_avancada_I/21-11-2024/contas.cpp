#include <bits/stdc++.h>

using namespace std;

int main(){
    int v, a, f, p;
    cin >> v;
    vector<int> contas(3);
    for (int i = 0; i < 3; i++){
        cin >> contas[i];
    }
    int ans = 0;
    sort(contas.begin(), contas.end());
    for (int i = 0; i < 3; i++){
        v -= contas[i]; // v = v - contas[i];
        if (v >= 0){
            ans++;
        } else {
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}