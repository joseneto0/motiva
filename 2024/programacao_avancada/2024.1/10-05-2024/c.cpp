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
int t;

void dfs(ll u){
    vis[u] = true;
    if (u == t){
        return;
    }
    for (auto x: adj[u]){
        if (!vis[x]){
            dfs(x);
        }
    }
}

int main(){
    ios;
    int n;
    cin >> n >> t;
    vector<ll> a(n);
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    for (int i = 1 ; i <= n-1; i++){
        cin >> a[i];
        adj[i].push_back(i + a[i]);
    }
    dfs(1);
    if (vis[t]){
        esac("YES");
    } else {
        esac("NO");
    }
    return 0;
}