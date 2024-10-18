#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        queue<int> q1, q2;
        for (int i = 1; i <= n; i++){
            q1.push(i);
        }
        while (q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
            q1.push(q1.front());
            q1.pop();
        }
        int t = q2.size();
        cout << "Discarded cards: ";
        while (!q2.empty()){
            if (t == 1){
                cout << q2.front() << "\n";
            } else {
                cout << q2.front() << ", ";
            }
            q2.pop();
            t--;
        }
        cout << "Remaining card: " << q1.front() << "\n";
    }
    return 0;
}