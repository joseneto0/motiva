#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int seg[4 * MAXN];
int a[MAXN];

int build(int p, int l, int r){
    if (l == r) return seg[p] = a[l];
    int m = (l + r) / 2;
    return seg[p] = min(build(2 * p, l, m), build(2 * p + 1, m + 1, r));
}

int query(int ql, int qr, int p, int l, int r){
    if (ql > r || qr < l) return INT_MAX;
    if (ql <= l && r <= qr) return seg[p];  
    int m = (l + r) / 2;
    return min(query(ql, qr, 2 * p, l, m), query(ql, qr, 2 * p + 1, m + 1, r));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    build(1, 0, n - 1);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--; r--; 
        cout << query(l, r, 1, 0, n - 1) << '\n';
    }
    return 0;
}