#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()

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
    sort(all(adj));
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
