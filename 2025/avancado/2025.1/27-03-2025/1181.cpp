#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int l;
    cin >> l;
    char t;
    cin >> t;
    vector<vector<double>> m(12, vector<double>(12, 0));
    double soma = 0;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> m[i][j];
            if (i == l){
                soma += m[i][j];
            }
        }
    }
    if (t == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    } else if (t == 'M'){
        cout << fixed << setprecision(1) << (soma / 12.0) << endl;
    }
    return 0;
}