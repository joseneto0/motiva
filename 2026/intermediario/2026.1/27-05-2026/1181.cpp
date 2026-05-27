#include <bits/stdc++.h>

using namespace std;


int main(){
    int l;
    cin >> l;
    char o;
    cin >> o;
    vector<vector<double>> matriz(12, vector<double>(12, 0));
    double soma = 0;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> matriz[i][j];
            if (i == l){
                soma += matriz[i][j];
            }
        }
    }
    if (o == 'S'){
        cout << fixed << setprecision(1) << soma << endl;
    } else {
        cout << fixed << setprecision(1) << (soma / 12) << endl;
    }
    return 0;
}