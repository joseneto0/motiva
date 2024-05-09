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
vector<vector<char>> adj;
vector<vector<bool>> vis;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y]){
        return false;
    }
    return true;
}

void dfs(int i, int j){
    vis[i][j] = true;
    for (int d = 0; d < 4; d++){
        if (isValid(i + dx[d], j + dy[d])){
            dfs(i + dx[d], j + dy[d]);
        }
    }
}
 
int main(){
    ios;
    cin >> n >> m;
    adj.assign(n, vector<char>(m, ' '));
    vis.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] != '.'){
                vis[i][j] = true;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!vis[i][j]){
                dfs(i, j);
                ans++;
            }
        }
    }
    esac(ans);
    return 0;
}
