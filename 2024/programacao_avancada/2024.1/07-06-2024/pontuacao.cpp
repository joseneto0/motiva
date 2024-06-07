#include <bits/stdc++.h>

using namespace std;

int main(){
    int e, a,c;
    cin >> e >> a >> c;
    int soma = (e*2) + (a*3) + (c*5);
    if (soma >= 200){
        cout << "O" << "\n";
    } else if (soma >= 150){
        cout << "S" << "\n";
    } else if (soma >= 100){
        cout << "B" << "\n";
    } else {
        cout << "N" << "\n";
    }
    return 0;
}