#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    while (n--){
        cin >> s;
        if (mp.find(s) == mp.end()){
            mp[s] = 1;
            cout << "OK\n";
        } else {
            cout << s << mp[s] << '\n';
            mp[s]++;
        }
    }
    return 0;
}