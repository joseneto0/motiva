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
vector<bool> vis;
vector<int> pais;
 
void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = true;
    while (!q.empty()){
        int v = q.front();
        q.pop();
        for (auto x: adj[v]){
            if (!vis[x]){
                q.push(x);
                pais[x] = v;
                vis[x] = true;
            }
        }
    }
}
 
int main(){
    ios;
    int n, m, a, b;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    pais.assign(n+1, 1);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    vector<int> caminho;
    if (vis[n]){
        int x = n;
        while (pais[x] != x){
            caminho.push_back(x);
            x = pais[x];
        }
        cout << caminho.size()+1 << '\n';
        reverse(caminho.begin(), caminho.end());
        cout << 1 << " ";
        for (auto x: caminho){
            cout << x << " ";
        }
        cout << "\n";
    } else {
        esac("IMPOSSIBLE");
    }
    return 0;
}