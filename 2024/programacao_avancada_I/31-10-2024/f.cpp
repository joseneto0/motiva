#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    cin >> N;
    string nome;
    for (int i =0; i < N; i++){
        cin >> nome;
        if (nome.size() > 10){
            cout << nome[0] << nome.size()-2 << nome[nome.size()-1] << '\n';
        } else {
            cout << nome << '\n';
        }
    }
    return 0;
}