#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    set<int> alice, beatriz, juncao;
    while (true){
        cin >> a >> b;
        if (a == 0 && b == 0){
            break;
        }
        int x;
        for (int i = 0; i < a; i++){
            cin >> x;
            alice.insert(x);
        }
        for (int i = 0; i < b; i++){
            cin >> x;
            beatriz.insert(x);
        }
        set_union(alice.begin(), alice.end(), beatriz.begin(), beatriz.end(), inserter(juncao, juncao.end()));
        cout << min(juncao.size() - alice.size(), juncao.size() - beatriz.size()) << "\n";
        alice.clear();
        beatriz.clear();
        juncao.clear();
    }
    return 0;
}