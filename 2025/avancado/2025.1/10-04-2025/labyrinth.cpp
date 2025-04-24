#include <bits/stdc++.h>
 
#define int long long
 
using namespace std;
int n, m, xB, yB;
 
struct nodes{
    int x, y, w;
};
 
vector<vector<pair<int, int>>> pais;
 
void bfs(int i, int j, vector<vector<char>> &adj, vector<vector<bool>> &vis){
    queue<nodes> q;
    q.push({i, j, 0});
    vis[i][j] = true;
    while (!q.empty()) {
        int f = q.front().x;
        int s = q.front().y;
        int w = q.front().w;
        q.pop();
        if (adj[f][s] == 'B'){
            cout << "YES" << "\n";
            cout << w << "\n";
            return;
        }
        if (f-1 >= 0 && !vis[f-1][s]){
            pais[f-1][s] = {f, s};
            q.push({f-1, s, w+1});
            vis[f-1][s] = true;
        }
        if (s-1 >= 0 && !vis[f][s-1]){
            pais[f][s-1] = {f, s};
            q.push({f, s-1, w+1});
            vis[f][s-1] = true;
        }
        if (f+1 < n && !vis[f+1][s]){
            pais[f+1][s] = {f, s};
            q.push({f+1, s, w+1});
            vis[f+1][s] = true;
        }
        if (s+1 < m && !vis[f][s+1]){
            pais[f][s+1] = {f, s};
            q.push({f, s+1, w+1});
            vis[f][s+1] = true;
        }
    }
    cout << "NO" << "\n";
}
 
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int starti, startj;
    cin >> n >> m;
    vector<vector<char>> adj(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for (int i= 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] == '#'){
                vis[i][j] = true;
            } else if (adj[i][j] == 'A'){
                starti = i;
                startj = j;
            } else if (adj[i][j] == 'B'){
                xB = i;
                yB = j;
            }
        }
    }
    pais.assign(n, vector<pair<int, int>>(m, {starti, startj}));
    bfs(starti, startj, adj, vis);
    pais[starti][startj] = {-1, -1};
    string ansd = "";
    if (vis[xB][yB]){
        // cout << pais[xB][yB].first << " " << pais[xB][yB].second << "\n";
        // cout << xB << " " << yB << "\n";
        while (pais[xB][yB].first != -1){
            if(xB < pais[xB][yB].first) ansd += "U";
            else if(xB > pais[xB][yB].first) ansd += "D";
            else if(yB > pais[xB][yB].second) ansd += "R";
            else ansd += "L";
            int xB_ = xB, yB_ = yB;
            xB = pais[xB_][yB_].first;
            yB = pais[xB_][yB_].second;
        }
        reverse(ansd.begin(), ansd.end());
        cout << ansd << "\n";
    } 
    return 0;
}