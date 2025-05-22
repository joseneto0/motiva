#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

vector<tuple<int, int, int>> adj;
vector<pair<int,int>> ans;   
vector<int> id, sz;

int find(int v){
    if (id[v] == v){
        return v;
    }
    return id[v] = find(id[v]);
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
    id[i] = j;
    sz[j] += sz[i];
}

void kruskal(){
    sort(all(adj));
    int a, b, w;
    for (auto x: adj){
        tie(w, a, b) = x;
        if (find(a) != find(b)){
            unionn(a, b);
            ans.emplace_back(a, b);
        }
    }
}

int main() {
    ios;
    int n, m;
    int t = 1;
    vector<string> outputs;

    while (cin >> n >> m) {
        if (n == 0 && m == 0){
            break;
        }
        int x, y, z;
        for (int i = 0; i < m; i++){
            cin >> x >> y >> z;
            adj.emplace_back(z, x, y);
        }
        id.assign(n + 1, 0);
        sz.assign(n + 1, 1);
        for (int i = 0; i <= n; i++){
            id[i] = i;
        }
        kruskal();
        stringstream ss;
        ss << "Teste " << t << "\n";
        for (auto x: ans){
            ss << x.first << " " << x.second << "\n";
        }
        ss << "\n";
        outputs.push_back(ss.str());
        t++;
        adj.clear();
        ans.clear();
        id.clear();
        sz.clear();
    }

    for (const auto& out : outputs) {
        cout << out;
    }
    return 0;
}
