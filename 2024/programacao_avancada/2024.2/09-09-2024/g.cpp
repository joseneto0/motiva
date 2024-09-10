#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";
#define ios ios_base::sync_with_stdio;cin.tie(0);cout.tie(0)
#define f(i, s, t) for(int i = s; i < t; ++i)

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

vector<vector<char>> adj;
vector<vector<bool>> vis;
int n, m, k, qntd = 0, pontos = 0;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y]){
        return false;
    }
    return true;
}


void dfs(int i, int j){
    if (qntd == pontos - k){
        return;
    }
    vis[i][j] = true;
    qntd++;
    f(x, 0, 4){
        if (isValid(i + dx[x], j + dy[x])){
            dfs(i + dx[x], j + dy[x]);
        }
    }
}

void solve(){
    cin >> n >> m >> k;
    adj.assign(n, vector<char>(m));
    vis.assign(n, vector<bool>(m, false));
    int idxi, idxj;
    f(i, 0, n){
        f(j, 0, m){
            cin >> adj[i][j];
            if (adj[i][j] == '.'){
                pontos++;
            } else {
                vis[i][j] = true;
            }
        }
    }
    bool ok = false;
    f(i, 0, n){
        if (ok) break;
        f(j, 0, m){
            if (isValid(i, j)){
                dfs(i, j);
                if (qntd == pontos - k){
                    ok = true;
                    break;
                } else {
                    qntd = 0;
                }
            }
        }
    }
    f(i, 0, n){
        f(j, 0, m){
            if (!vis[i][j]){
                cout << 'X';
            } else {
                cout << adj[i][j];
            }
        }
        cout << "\n";
    }
    
}

int main(){
    int t;
    t = 1;
    while (t--){
        solve();
    }
}