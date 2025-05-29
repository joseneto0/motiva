#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define f(i, s, t) for(int i = s; i < t; ++i)
#define pii pair<int, int>
#define pll pair<ll, ll>
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 100100;
 
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int n;
vector<int> a, dp;

int rec(int x){
    if (x > n){
        return 0;
    }
    if (dp[x] == -1){
        dp[x] = a[x] + rec(x + a[x]);
    }
    return dp[x];
}

void solve(){
    cin >> n;
    a.assign(n+1, 0);
    dp.assign(n+1, -1);
    f(i, 1, n+1){
        cin >> a[i];
    }
    int maior = 0;
    f(i, 1, n+1){
        maior = max(maior, rec(i));
    }
    cout << maior << "\n";
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