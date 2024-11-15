#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> estoque(m+1, vector<int>(n+1));
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> estoque[i][j];
        }
    }
    int p;
    cin >> p;
    int ans = 0;
    for (int i = 0; i < p; i++){
        int x, y;
        cin >> x >> y;
        if (estoque[x][y] > 0){
            estoque[x][y]--;
            ans++;
        } 
    }	
    cout << ans << "\n";
    return 0;
}