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

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int n, m;
vector<vector<char>> adj;
vector<vector<bool>> vis;
vector<vector<pair<int, int>>> pais;

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y]){
        return false;
    }
    return true;
}

bool bfs(int i, int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    while (!q.empty()){
        int fx = q.front().first;
        int fy = q.front().second;
        q.pop();
        if (adj[fx][fy] == 'B'){
            return true;
        }
        for (int d = 0; d < 4; d++){
            if (isValid(fx + dx[d], fy + dy[d])){
                q.push({fx + dx[d], fy + dy[d]});
                vis[fx + dx[d]][fy + dy[d]] = true;
                pais[fx + dx[d]][fy + dy[d]] = {fx, fy};
            }
        }
    }
    return false;
}

int main(){
    ios;
    cin >> n >> m;
    adj.assign(n, vector<char>(m, ' '));
    vis.assign(n, vector<bool>(m, false));
    pair<int, int> start, end;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] == '#'){
                vis[i][j] = true;
            } else if (adj[i][j] == 'A'){
                start = {i, j};
            } else if (adj[i][j] == 'B'){
                end = {i, j};
            }
        }
    }
    pais.assign(n, vector<pair<int, int>>(m, start));
    pais[start.first][start.second] = {-1, -1};
    if (bfs(start.first, start.second)){
        cout << "YES" << "\n";
        string ans = "";
        while (pais[end.first][end.second].first != -1){
            if (end.first < pais[end.first][end.second].first){
                ans += "U";
            } else if (end.first > pais[end.first][end.second].first){
                ans += "D";
            } else if (end.second < pais[end.first][end.second].second){
                ans += "L";
            } else {
                ans += "R";
            }
            int auxI = end.first, auxJ = end.second;
            end.first = pais[auxI][auxJ].first;
            end.second = pais[auxI][auxJ].second;
        }
        reverse(all(ans));
        cout << len(ans) << "\n";
        cout << ans << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}
