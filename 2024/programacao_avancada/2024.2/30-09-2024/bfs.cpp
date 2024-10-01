#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void bfs(int v){
    vis[v] = true;
    queue<int> q;
    q.push(v);
    while (!q.empty()){
        int f = q.front();
        q.pop();
        for (int x: adj[f]){
            if (!vis[x]){
                vis[x] = true;
                q.push(x);
            }
        }
    }
}

int main(){
    
    return 0;
}
