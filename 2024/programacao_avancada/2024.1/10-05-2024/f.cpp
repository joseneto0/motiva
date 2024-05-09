#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vector<vector<int>> adj;
vector<int> vis;
vector<int> a;
int n, m;

void dfs(int u, int cont, int &ans){
    vis[u] = 1;
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
    ios;
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