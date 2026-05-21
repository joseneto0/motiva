#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<char>> matriz;
vector<vector<bool>> vis;
vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};

bool isValid(int i, int j){
    return (i >= 0 and i < n and j >= 0 and j < m and matriz[i][j] == '.' and !vis[i][j]);
}

void dfs(int i, int j){
    vis[i][j] = true;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (isValid(x, y)){
            dfs(x, y);
        }
    }
}

int main(){
    cin >> n >> m;
    matriz.assign(n, vector<char>(m));
    vis.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == '#'){
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
    cout << ans << endl;
    return 0;
}