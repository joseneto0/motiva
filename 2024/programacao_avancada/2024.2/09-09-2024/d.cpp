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

}

int main(){
    ios;
    string s;
    cin >> s;
    int cont = 0, cont2 = 0, ans = 0;
    ans += min(abs('a' - s[0]), 26 - abs('a' - s[0]));
    f(i, 0, len(s)-1){
        ans += min(abs(s[i] - s[i+1]), 26 - abs(s[i] - s[i+1]));
    }
    cout << ans << "\n";
    return 0;   
}