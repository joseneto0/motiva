#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

int cont = 0;

void dfs(int v){
    vis[v] = true;
    for (int x: adj[v]){
        if (!vis[x]){
            dfs(x);
            cont += 2;
        }
    }
}

void solve(){
    int n, v, a;
    cin >> n >> v >> a;
    adj.assign(v, vector<int>());
    vis.assign(v, false);
    for (int i = 0; i < a; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(n);
    cout << cont << "\n";
    cont = 0;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
