#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define lenLL(x) (ll)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int n, m;
vector<vector<pair<int, int>>> adj;
vector<bool> vis;
vector<int> value;

int prim(){
    priority_queue<pair<int, int>> pq;
    int custo = 0;
    value[0] = 0;
    pq.push({0, 0});
    for (int k = 0; k < n; k++){
        int atual;
        while (true){
            atual = pq.top().second;
            pq.pop();
            if (!vis[atual]){
                break;
            }
        }
        vis[atual] = true;
        custo += value[atual];
        for (auto x: adj[atual]){
            int v = x.first;
            int w = x.second;
            if (value[v] > w){
                value[v] = w;
                pq.push({-value[v], v});
            }
        }
    }
    return custo;
}

int main(){
    ios;
    cin >> n >> m;
    adj.assign(n, vector<pair<int, int>>());
    vis.assign(n, false);
    value.assign(n, INF);
    int p, q, u;
    for (int i = 0; i < m; i++){
        cin >> p >> q >> u;
        adj[p].push_back({q, u});
        adj[q].push_back({p, u});
    }
    esac(prim());
    return 0;
}