#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    cin >> n;
    set<int> x;
    for (int i = 0; i < n; i++){
        cin >> aux;
        x.insert(aux);
    }
    cout << x.size() << "\n";
    return 0;
}