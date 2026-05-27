#include <bits/stdc++.h>

using namespace std;

bool binarySearch(vector<int> numeros, int valor) {
    int left = 0, right = numeros.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (numeros[mid] == valor) {
            return true;
        } else if (numeros[mid] < valor) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<int> numeros = {12, 5, 23, 8, 56, 38, 72, 16, 91};
    int valor = 38;
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] == valor) {
            cout << "Achei :) " << endl;
            break;
        }
    }
    return 0;
}