#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, letras;
    getline(cin, s);
    cin >> letras;
    int ans = 0;
    stringstream palavras(s);
    string palavra;
    bool achou = false;
    map<string, int> mp;
    while (palavras >> palavra){
        for (char i: palavra){
            for (char j: letras){
                if (i == j){
                    mp[palavra]++;
                }
            }
        }
    }
    stringstream palavras2(s);
    while (palavras2 >> palavra){
        if (mp[palavra] > 0){
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}