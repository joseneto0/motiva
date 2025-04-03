#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    ll aux;
    cin >> n;
    set<ll> s;
    for (int i = 0; i < n; i++){
        cin >> aux;
        s.insert(aux);
    }
    cout << s.size() << "\n";
    return 0;
}