#include <bits/stdc++.h>

using namespace std;

void solve(){
    int rating;
    cin >> rating;
    if (rating <= 1399){
        cout << "Division 4" << '\n';
    } else if (rating <= 1599){
        cout << "Division 3" << '\n';
    } else if (rating <= 1899){
        cout << "Division 2" << '\n';
    } else {
        cout << "Division 1" << '\n';
    }
}

int main(void){
    int t; 
    cin >> t; 
    while(t--){
        solve();
    }
}