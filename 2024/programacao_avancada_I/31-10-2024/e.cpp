#include <bits/stdc++.h>

using namespace std;

int main(){
    ios;
    string s;
    cin >> s;
    int cont = 0, cont2 = 0, ans = 0;
    ans += min(abs('a' - s[0]), 26 - abs('a' - s[0]));
    for (int i = 0; i < s.size()-1; i++){
        ans += min(abs(s[i] - s[i+1]), 26 - abs(s[i] - s[i+1]));
    }
    cout << ans << "\n";
    return 0;   
}