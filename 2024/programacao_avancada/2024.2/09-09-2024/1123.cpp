#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> dist;

void dijkstra(int s){
    queue<pair<int,int>> q;
    q.push({0, s});
    dist[s] = 0;
    while (!q.empty()){
        int u = q.front().second;
        q.pop();
        for (auto x: adj[u]){
            int v = x.first;
            int w = x.second;
            if (dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                q.push({dist[v], v});
            }
        }
    }
}

int main(){
    int n, m, c, k;
    while (true){
        cin >> n >> m >> c >> k;
        if (!n && !m && !c && !k) break;
        adj.assign(n, vector<pair<int,int>>());
        dist.assign(n, INF);
        for (int i = 0; i < m; i++){
            int u, v, p;
            cin >> u >> v >> p;
            if (u >= c && v >= c){ // se as 2 estiverem fora da rota padrao
                adj[u].push_back({v, p});
                adj[v].push_back({u, p});
            }

            //se somente u estiver fora da rota padrao
            if (u >= c && v < c){
                adj[u].push_back({v, p});
            }

            //se somente v estiver fora da rota padrao
            if (u < c && v >= c){
                adj[v].push_back({u, p});
            }

            //se as cidades forem consecutivas
            if (u < c && v < c && abs(u-v) == 1){
                adj[u].push_back({v, p});
                adj[v].push_back({u, p});
            }
        }
        dijkstra(k);
        cout << dist[c-1] << "\n";
    }
    
    return 0;
}