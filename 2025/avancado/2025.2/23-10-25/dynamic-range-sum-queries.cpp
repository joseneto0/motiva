#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 2e5 + 5;
ll seg[4 * MAXN];
ll a[MAXN];

#ifdef EBUG
	#include "bug.hpp"
#else
	#define bug(x) { ; }
	#define bug2(x,y) { ; }
	#define bug3(x,y,z) { ; }
	#define bugV(V) { ; }
	#define bugP(V) { ; }
	#define bugL() { ; }
#endif

ll build(int p, int l, int r){
    if (l == r) return seg[p] = a[l];
    int m = (l + r) / 2;
    return seg[p] = build(2 * p, l, m) + build(2 * p + 1, m + 1, r);
}

ll query(int ql, int qr, int p, int l, int r){
    if (ql > r || qr < l) return 0;
    if (ql <= l && r <= qr) return seg[p];  

    int m = (l + r) / 2;
    return query(ql, qr, 2 * p, l, m) + query(ql, qr, 2 * p + 1, m + 1, r);
}

ll update(int i, ll x, int p, int l, int r){
    if (i < l || i > r) return seg[p];
    if (l == r) return seg[p] = x;
    int m = (l + r) / 2;
    return seg[p] = update(i, x, 2 * p, l, m) + update(i, x, 2 * p + 1, m + 1, r);
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
        int op, l, r;
        ll x_val;  
        
        cin >> op;
        if (op == 1) {
            cin >> l >> x_val;
            l--; 
            update(l, x_val, 1, 0, n - 1);
        } else {
            cin >> l >> r;
            l--; r--; 
            cout << query(l, r, 1, 0, n - 1) << '\n';
        }
    }
    return 0;
}
