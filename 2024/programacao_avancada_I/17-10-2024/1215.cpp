#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, palavra_atual;
    set<string> dicionario;
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    while (cin >> s){
        stringstream ss(s);
        string word;
        while (ss >> palavra_atual){
            for (auto x: palavra_atual){
                if (alfabeto.find(tolower(x)) != string::npos && x != ' ' && x != '\n'){
                    word += tolower(x);
                } else {
                    if (word != ""){
                        dicionario.insert(word);
                    }
                    word = "";
                }
            }
            if (word != ""){
                dicionario.insert(word);
            }
        }
    }
    for (auto x: dicionario){
        cout << x << "\n";
    }   
    return 0;
}