//1018 - Cédulas (beecrowd)
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, notas100, notas50, notas20, notas10, notas5, notas2, notas1, resto;
    cin >> n;
    notas100 = n / 100;
    resto = n % 100;
    notas50 = resto / 50;
    resto = resto % 50;
    notas20 = resto / 20;
    resto = resto % 20;
    notas10 = resto / 10;
    resto = resto % 10;
    notas5 = resto / 5;
    resto = resto % 5;
    notas2 = resto / 2;
    resto = resto % 2;
    notas1 = resto / 1;
    resto = resto % 1;
    cout << n << "\n";
    cout << notas100 << " nota(s) de R$ 100,00" << "\n";
    cout << notas50 << " nota(s) de R$ 50,00" << "\n";
    cout << notas20 << " nota(s) de R$ 20,00" << "\n";
    cout << notas10 << " nota(s) de R$ 10,00" << "\n";
    cout << notas5 << " nota(s) de R$ 5,00" << "\n";
    cout << notas2 << " nota(s) de R$ 2,00" << "\n";
    cout << notas1 << " nota(s) de R$ 1,00" << "\n";
    return 0;
}