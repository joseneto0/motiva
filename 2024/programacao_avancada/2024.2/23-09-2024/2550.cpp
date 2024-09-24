#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

vector<int> parent, sz;

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

ll kruskal(vector<tuple<int, int, int>>& adj, int n, string opc){
    sort(all(adj));
    int ans = 0;
    int w, a, b;
    if (opc == "maior"){
        for (int i = n-1; i >= 1; i--){
            tie(w, a, b) = adj[i];
            if (find(a) != find(b)){
                unionn(a, b);
                ans += w;
            }
        }
    } else {
        for (auto i: adj){
            tie(w, a, b) = i;
            if (find(a) != find(b)){
                unionn(a, b);
                ans += w;
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int u, v, w;
    vector<tuple<int, int, int>> adj;
    for (int i = 0; i < n; i++){
        cin >> u >> v >> w;
        adj.emplace_back(w, u, v);
    }
    parent = vector<int>(n+1);
    sz = vector<int>(n+1, 1);
    iota(all(parent), 0);
    int maior = kruskal(adj, n, "maior");
    parent = vector<int>(n+1);
    sz = vector<int>(n+1, 1);
    iota(all(parent), 0);
    int menor = kruskal(adj, n, "menor");
    cout << maior << "\n";
    cout << menor << "\n";
    return 0;
}