#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, t;
    cin >> s >> t;
    vector<vector<bool>> adj(s+1, vector<bool>(s+1, false));
    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        adj[a][b] = true;
        adj[b][a] = true;
    }
    int p;
    cin >> p;
    int ans = 0;
    for (int i = 0; i < p; i++){
        int n;
        cin >> n;
        vector<int> path(p);
        for (int j = 0; j < n; j++){
            cin >> path[j];
        }
        bool valid = true;
        for (int j = 0; j < n-1; j++){
            if (path[j] != path[j+1]){
                if (!adj[path[j]][path[j+1]]){
                    valid = false;
                    break;
                }
            }
        }
        if (valid){
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}