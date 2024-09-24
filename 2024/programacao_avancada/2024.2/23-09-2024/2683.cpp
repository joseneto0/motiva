#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

vector<int> parent, sz;
vector<vector<int>> adj2;
vector<bool> vis;

int find(int v){
    if (parent[v] == v){
        return v;
    }
    return parent[v] = find(parent[v]);
}

void unionn(ll i, ll j){
    i = find(i);
    j = find(j);
    if (i == j){
        return;
    }
    if (sz[i] > sz[j]){
        swap(i, j);
    }
    parent[i] = j;
    sz[j] += sz[i];
}

int kruskal(vector<tuple<int, int, int>>& adj){
    sort(all(adj));
    int a, b, w;
    int ans = 0;
    for (auto i: adj){
        tie(w, a, b) = i;
        if (find(a) != find(b)){
            unionn(a, b);
            adj2[a].push_back(b);
            adj2[b].push_back(a);
            ans += w;
        }
    }
    return ans;
}

void dfs(int v){
    vis[v] = true;
    for (auto x: adj2[v]){
        if (!vis[x]){
            dfs(x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    while (cin >> n >> m){
        int a, b, c;
        vector<tuple<int, int, int>> adj;
        for (int i = 0; i < m; i++){
            cin >> a >> b >> c;
            adj.emplace_back(c, a, b);
        }
        parent = vector<int>(n+1);
        sz = vector<int>(n+1, 1);
        iota(all(parent), 0);
        adj2.assign(n+1, vector<int>());
        vis.assign(n+1, false);
        int ans = kruskal(adj);
        dfs(1);
        bool impossivel = false;
        for (int i = 1; i <= n; i++){
            if (!vis[i]){
                impossivel = true;
                break;
            }
        }
        if (impossivel){
            cout << "impossivel" << "\n";
        } else {
            cout << ans << "\n";
        }
    }
    return 0;
}