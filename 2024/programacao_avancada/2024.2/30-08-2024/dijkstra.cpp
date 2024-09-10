#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

vector<vector<pair<int, int>>> adj;
vector<bool> vis;
vector<int> dist;

void dijkstra(int s){
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for (auto x: adj[u]){
            int v = x.first;
            int w = x.second;
            if (dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n  >> m;
    adj.assign(n+1, vector<pair<int,int>>());
    vis.assign(n+1, false);
    dist.assign(n+1, INF);
    for (int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    cout << "\n";
    return 0;
}