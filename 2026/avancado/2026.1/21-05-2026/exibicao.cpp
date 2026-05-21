#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> filmes;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        filmes.push_back({b, a}); 
    }

    sort(filmes.begin(), filmes.end());
    int resposta = 0;
    int fimAtual = 0;

    for (auto filme : filmes) {
        int fim = filme.first;
        int inicio = filme.second;
        if (inicio >= fimAtual) {
            resposta++;
            fimAtual = fim;
        }
    }

    cout << resposta << endl;

    return 0;
}