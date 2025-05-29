#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";
#define ios ios_base::sync_with_stdio;cin.tie(0);cout.tie(0)
#define f(i, s, t) for(int i = s; i < t; ++i)
#define pii pair<int, int>
#define pll pair<ll, ll>
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 100100;
 
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vector<int> a, memo;

int n, k;

int frog(int i){
    if (i == 0){
        return 0;
    }
    if (memo[i] == -1){
        int val = INT_MAX;
        for (int j = i-1; j >= i-k; j--){
            if (j >= 0){
                val = min(val, frog(j) + abs(a[i] - a[j]));
            }
        }
        memo[i] = val;
    }
    return memo[i];
}

void solve(){
    cin >> n >> k;
    a.assign(n, 0);
    memo.assign(n, -1);
    f(i, 0, n){
        cin >> a[i];
    }
    esac(frog(n-1));
}

int main(){
    ios;
    int t = 1;
    while (t--){
        solve();
    }
    return 0;
}