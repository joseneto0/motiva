#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<char>> matriz;
vector<vector<bool>> visitados;
int n, m;
 
void dfs(int i, int j){
    visitados[i][j] = true;
    if (i > 0 && !visitados[i-1][j]){
        dfs(i-1, j);
    }
    if (i < n-1 && !visitados[i+1][j]){
        dfs(i+1, j);
    }
    if (j > 0 && !visitados[i][j-1]){
        dfs(i, j-1);
    }
    if (j < m-1 && !visitados[i][j+1]){
        dfs(i, j+1);
    }
    return;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    matriz.assign(n, vector<char>(m));
    visitados.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == '#'){
                visitados[i][j] = true;
            }
        }
    }
    int cont = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!visitados[i][j]){
                dfs(i, j);
                cont++;
            }
        }
    }
    cout << cont << "\n";
    return 0;
}
