#include <bits/stdc++.h>

using namespace std;

bool binary_search(vector<int> numeros, int alvo){
    int left = 0;
    int right = numeros.size() - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(numeros[mid] == alvo){
            return true;
        } else if(numeros[mid] < alvo){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int alvo = 5;
    if(binary_search(numeros, alvo)){
        cout << "O número " << alvo << " foi encontrado na lista." << endl;
    } else {
        cout << "O número " << alvo << " não foi encontrado na lista." << endl;
    }
    return 0;
}