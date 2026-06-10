#include <bits/stdc++.h>

using namespace std;

int main() {
    int V;
    cin >> V;

    int m100 = V / 100;
    V %= 100;

    int m50 = V / 50;
    V %= 50;

    int m25 = V / 25;
    V %= 25;

    int m10 = V / 10;
    V %= 10;

    int m5 = V / 5;
    V %= 5;

    int m1 = V;

    int ans = m100 + m50 + m25 + m10 + m5 + m1;

    cout << ans << "\n";

    return 0;
}