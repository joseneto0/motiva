#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n <= 10){
        cout << "Voce digitou um valor entre 0 e 10" << endl;
    } else if (n <= 20){
        cout << "Voce digitou um valor entre 11 e 20" << endl;
    } else if (n <= 30){
        cout << "Voce digitou um valor entre 21 e 30" << endl;
    } else {
        cout << "Voce digitou um valor maior que 30" << endl;
    }
    return 0;
}