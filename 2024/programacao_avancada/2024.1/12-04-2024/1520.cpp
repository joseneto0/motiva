#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (cin >> n){
        int x, y, num;
        vector<int> pos;
        for (int i = 0; i < n; i++){
            cin >> x >> y;
            for (int j = x; j <= y; j++){
                pos.push_back(j);
            }
        }
        sort(pos.begin(), pos.end());
        cin >> num;
        vector<int> numeros;
        for (int i = 0; i < pos.size(); i++){
            if (pos[i] == num){
                numeros.push_back(i);
            }
        }
        if (numeros.size() > 0){
            cout << num << " found from " << numeros[0] << " to " << numeros[numeros.size()-1] << "\n"; 
        } else {
            cout << num << " not found" << "\n";
        }
    }
    return 0;
}