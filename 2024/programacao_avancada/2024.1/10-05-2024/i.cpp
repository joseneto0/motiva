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
vector<pair<int, int>> oponentes;
vector<vector<int>> dist;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || adj[x][y] == 'T'){
        return false;
    }
    return true;
}

void bfs(int i, int j){
    queue<pair<int, int>> q;
    vis[i][j] = true;
    q.push({i, j});
    while (!q.empty()){
        int f = q.front().first;
        int s = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            if (isValid(f + dx[i], s + dy[i])){
                vis[f + dx[i]][s + dy[i]] = true;
                dist[f + dx[i]][s + dy[i]] = dist[f][s] + 1;
                q.push({f + dx[i], s + dy[i]});
            }
        }
    }
}

int main(){
    ios;
    cin >> n >> m;
    adj.assign(n, vector<char>(m));
    vis.assign(n, vector<bool>(m, false));
    dist.assign(n, vector<int>(m, INT_MAX));
    pair<int, int> saida, inicio;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] != 'E' && adj[i][j] != 'S' && adj[i][j] != '0' && adj[i][j] != 'T'){
                oponentes.push_back({i, j});
            } else if (adj[i][j] == 'E'){
                saida = {i, j};
            } else if (adj[i][j] == 'S'){
                inicio = {i, j};
            }
        }
    }
    bfs(saida.first, saida.second);
    int ans = 0;
    int d = dist[inicio.first][inicio.second];
    for (auto x: oponentes){
        if (dist[x.first][x.second] <= d){
            ans += adj[x.first][x.second] - '0';
        }
    }
    esac(ans);
    return 0;
}