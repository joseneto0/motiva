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

int n, m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> dist;


void bfs(int i){
    queue<int> q;
    vis[i] = true;
    q.push(i);
    while (!q.empty()){
        int f = q.front();
        q.pop();
        for (auto x: adj[f]){
            if (!vis[x]){
                vis[x] = true;
                dist[x] = dist[f] + 1;
                q.push(x);
            }
        }
    }
}

void solve(){
    int n, m, x, y;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    dist.assign(n+1, 0);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1);
    vector<int> par, impar;
    for (int i = 1; i <= n; i++){
        if (dist[i] % 2 == 0){
            par.push_back(i);
        } else {
            impar.push_back(i);
        }
    }
    if (len(impar) < len(par)){
        cout << len(impar) << "\n";
        for (int i: impar){
            cout << i << " ";
        }
        cout << "\n";
    } else {
        cout << len(par) << "\n";
        for (int i: par){
            cout << i << " ";
        }
        cout << "\n";
    }
}
int main(){
    ios;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
