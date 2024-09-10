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

void solve(){
    vector<int> x(3);
    f(i, 0, 3){
        cin >> x[i];
    }
    int soma = 0, ans = INT_MAX;
    f(i, 0, 3){
        f(j, 0, 3){
            soma += abs(x[i] - x[j]);
        }
        ans = min(ans, soma);
        soma = 0;
    }
    esac(ans);
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