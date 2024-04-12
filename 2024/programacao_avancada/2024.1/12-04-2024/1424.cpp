#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, aux;
    map<long long, vector<long long>> mp;
    while (cin >> n >> m){
        for (long long i = 0; i < n; i++){
            cin >> aux;
            mp[aux].push_back(i+1);
        }
        long long k, v;
        for (long long i = 0; i < m; i++){
            cin >> k >> v;
            if (k > mp[v].size()){
                cout << 0 << "\n";
            } else {
                cout << mp[v][k-1] << "\n";
            }
        }
        mp.clear();
    }
    return 0;
}