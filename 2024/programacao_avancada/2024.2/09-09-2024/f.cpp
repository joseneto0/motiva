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
 
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int n, m;
ll maior = 0;

bool isPossible(vector<vector<ll>> &a, int i, int j){
    maior = 0;
    f(k, 0, 4){
        if (i - dx[k] < 0 || i - dx[k] >= n || j - dy[k] < 0 || j - dy[k] >= m){
            continue;
        }
        if (a[i][j] <= a[i - dx[k]][j - dy[k]]){
            return false;
        } else {
            maior = max(maior, a[i - dx[k]][j - dy[k]]);
        }
    }
    return true;
}

void solve(){
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    f(i, 0, n){
        f(j, 0, m){
            cin >> a[i][j];
        }
    }
    bool possivel = true;
    while (possivel){
        int cont = 0;
        f(i, 0, n){
            f(j, 0, m){
                if (isPossible(a, i, j)){
                    a[i][j] -= a[i][j] - maior;
                } else {
                    cont++;
                }
            }
        }
        if (cont == n*m){
            possivel = false;
        }
    }
    f(i, 0, n){
        f(j, 0, m){
            cout << a[i][j] << " ";
        }
        cout << "\n";
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