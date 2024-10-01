#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> dist;

void dijkstra(int s){
    priority_queue<pair<int, int>> pq;
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