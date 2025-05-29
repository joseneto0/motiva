#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> a;
map<int, int> mp;

int busca_bin(int n, int x){
    int l = 1, r = n+1;
    while (r - l != 1){
        int m = (r + l) / 2;
        if (a[m] <= x){
            l = m;
        } else {
            r = m;
        }
    }
    return l;
}

void solve(){
    int n, x;
    cin >> n >> x;
    a.assign(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        mp[a[i]] = i;
    }
    int p = busca_bin(n, x);
    if (a[p] == x){
        esac(0);
    } else {
        esac(1);
        cout << mp[x] << " " << p << "\n";
    }
    
}

int main(){
    ios;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}