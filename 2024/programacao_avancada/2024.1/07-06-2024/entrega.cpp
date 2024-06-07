#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b < c || a < b && b < c){
        cout << 1 << "\n";
    } else if (b < c && a + b >= c || b >= c && a < b){
        cout << 2 << "\n";
    } else {
        cout << 3 << "\n";
    }
    return 0;
}