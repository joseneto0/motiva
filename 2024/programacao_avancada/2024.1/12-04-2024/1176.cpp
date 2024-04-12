#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> v = {0, 1};
        for (int i = 2; i <=n; i++){
            v.push_back(v[i-1] + v[i-2]);
        }
        cout << "Fib(" << n << ") = " << v[n] << '\n';
    }
    return 0;
}