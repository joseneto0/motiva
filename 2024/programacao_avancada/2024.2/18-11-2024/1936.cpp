#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> fatorial(11);
    fatorial[0] = 1;
    for (int i = 1; i <= 10; i++){
        fatorial[i] = fatorial[i-1] * i;
    }
    int ans = 0;
    for (int i = 10; i >= 1; i--){
        ans += n / fatorial[i];
        n -= (n / fatorial[i]) * fatorial[i];
    }
    cout << ans << "\n";
}