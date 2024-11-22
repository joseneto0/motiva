#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> estoque;  
    int ans = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (estoque[x] > 0){
            estoque[x]--;
        } else {
            ans += 2;
            estoque[x]++;
        }
    }
    cout << ans << "\n";
    return 0;
}