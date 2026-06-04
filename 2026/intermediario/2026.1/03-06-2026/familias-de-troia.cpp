#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int i){
    vis[i] = true;
    for (auto x: adj[i]){
        if (!vis[x]){
            dfs(x);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int x, y;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int componentes = 0;
    for (int i =  1; i <= n; i++){
        if (!vis[i]){
            dfs(i);
            componentes++;
        }
    }
    cout << componentes << endl;
    return 0;
}