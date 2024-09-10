#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> dist;

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dist[s] = 0;
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (auto x: adj[u]){
            if (!vis[x]){
                q.push(x);
                vis[x] = true;
                dist[x] = dist[u] + 1;
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n  >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    dist.assign(n+1, INF);
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1);
    for (int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    cout << "\n";
    return 0;
}