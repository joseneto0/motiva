#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#ifdef EBUG
	#include "bug.hpp"
#else
	#define bug(x) { ; }
	#define bug2(x,y) { ; }
	#define bug3(x,y,z) { ; }
	#define bugV(V) { ; }
	#define bugP(V) { ; }
	#define bugL() { ; }
#endif

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vector<vector<int>> adj;
vector<bool> vis;
vector<int> componentes;

void dfs(int i){
    vis[i] = true;
    for (auto x: adj[i]){
        if (!vis[x]){
            dfs(x);
        }
    }
}

int main(){
    ios;
    int n, m, x, y;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++){
        if (!vis[i]){
            dfs(i);
            componentes.push_back(i);
        }
    }
    esac(len(componentes)-1);
    for (int i = 0; i < len(componentes)-1; i++){
        cout << componentes[i] << " " << componentes[i+1] << "\n";
    }
    return 0;
}
