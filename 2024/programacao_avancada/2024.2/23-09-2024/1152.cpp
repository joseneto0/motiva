#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()

vector<ll> parent, sz;

ll find(ll v){
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

ll kruskal(vector<tuple<ll, ll, ll>>& adj){
    sort(all(adj));
    ll custo = 0;
    ll a, b, w;
    for (auto i: adj){
        tie(w, a, b) = i;
        if (find(a) != find(b)){
            unionn(a, b);
            custo += w;
        }
    }
    return custo;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll m, n;
    while (true){
        cin >> m >> n;
        if (m == 0 && n == 0){
            break;
        }
        parent = vector<ll>(m+1);
        sz = vector<ll>(m+1, 1);
        iota(all(parent), 0);
        ll x, y, z;
        ll soma = 0;
        vector<tuple<ll, ll, ll>> adj;
        for (ll i = 0; i < n; i++){
            cin >> x >> y >> z;
            soma += z;
            adj.emplace_back(z, x, y);
        }
        ll calc = kruskal(adj);
        cout << soma - calc << "\n";
    }
    return 0;
}