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

vector<vector<int>> adj;
vector<int> times;
bool impossivel = false;
 
void dfs(int u){
    if (times[u] == 0){
        times[u] = 1;
    }
    int outro;
    if (times[u] == 1){
        outro = 2;
    } else {
        outro = 1;
    }
    for (auto v: adj[u]){
        if (times[v] == 0){
            times[v] = outro;
            dfs(v);
        } else {
            if (times[v] != outro){
                impossivel = true;
                return;
            }
        }
    }
}
 
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, m, a, b;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    times.assign(n+1, 0);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++){
        if (times[i] == 0){
            dfs(i);
        }
    }
    if (impossivel){
        cout << "IMPOSSIBLE" << "\n";
    } else {
        for (int i = 1; i <= n; i++){
            cout << times[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}