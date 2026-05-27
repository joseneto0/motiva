#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a;
    int n;
    cin >> n; 
    for (int i = 0; i< 10; i++){
        a[i] = n;
        n *= 2;
    }
    for (int i: a){
        cout << i << endl;
    }
    return 0;
}