#include <bits/stdc++.h>

using namespace std;

vector<int> fibo(52, -1), passos(52, -1);

void precalculo(int x){
    if (fibo[x] == -1){
        precalculo(x-1);
        precalculo(x-2);
        fibo[x] = fibo[x-1] + fibo[x-2];
        passos[x] = passos[x - 1] + passos[x - 2] + 1;
    }
}

void solve(){
    int x;
    cin >> x;
    precalculo(x);
    cout << "fib(" << x << ") = " << passos[x] - 1 << " calls = " << fibo[x] << "\n";
}

int main(){
    int n;
    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    passos[0] = 1;
    passos[1] = 1;
    while (n--){
        solve();
    }    
    return 0;
}