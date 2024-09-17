#include <bits/stdc++.h>

using namespace std;

vector<tuple<int, int, int>> adj;
vector<int> parent, sz;

int find(int v){
    if (parent[v] == v){
        return v;
    }
    return parent[v] = find(parent[v]);
}

void unionn(int i, int j){
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

int kruskal(){
    sort(adj.begin(), adj.end());
    int custo = 0;
    int a, b, w;
    for (auto x: adj){
        tie(w, a, b) = x;
        if (find(a) != find(b)){
            unionn(a, b);
            custo += w;
        }
    }
    return custo;
}

int main(){
    int n;
    cin >> n;
    parent.assign(n+1, 0);
    sz.assign(n+1, 1);
    adj.assign(n+1, tuple<int, int, int>());
    iota(parent.begin(), parent.end(), 0);
    int x, y, w;
    for (int i = 1; i <= n; i++){
        cin >> x >> y >> w;
        adj.emplace_back(w, x, y);
    }
    kruskal();
    return 0;
}