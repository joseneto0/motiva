#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int soma = a * 1 + b * 2 + c * 3;
    char s;
    if (soma >= 150){
        s = 'B';
    } else if (soma >= 120){
        s = 'D';
    } else if (soma >= 100){
        s = 'P';
    } else {
        s = 'N';
    }
    cout << s << "\n";
    return 0;
}