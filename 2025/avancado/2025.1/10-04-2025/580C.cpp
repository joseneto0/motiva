#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

vector<vector<int>> adj;
vector<int> vis;
vector<int> a;
int n, m;

void dfs(int u, int cont, int &ans){
    vis[u] = 1;
    // cout << u << " " << cont << "\n";
    if (a[u] == 1) cont++;
    else cont = 0;
    if (cont > m){
        return;
    }
    if (u != 1 && adj[u].size() == 1 && cont <= m){
        ans++;
        return;
    }
    for (auto x: adj[u]){
        if (vis[x] != 1){
            dfs(x, cont, ans);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, 0);
    a.assign(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int x, y;
    for (int i = 0; i < n-1; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int cont = 0, ans = 0;
    dfs(1, cont, ans);
    cout << ans << "\n";
    return 0;
}