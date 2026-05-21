#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool correto = true;
    for (int i = 0; i < s.size(); i++){
        if (i % 2 == 0){
            if (!islower(s[i])){
                correto = false;
                break;
            }
        } else {
            if (!isupper(s[i])){
                correto = false;
                break;
            }
        }
    }
    if (correto){
        cout << "SIM" << endl;
    } else {
        cout << "NÃO" << endl;
    }
    return 0;
}