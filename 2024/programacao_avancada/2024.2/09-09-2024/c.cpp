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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> maiores;
    f(i, 0, n){
        int menor = INT_MAX;
        f(j, 0, m){
            cin >> a[i][j];
            menor = min(menor, a[i][j]);
        }
        maiores.push_back(menor);
    }
    esac(*max_element(all(maiores)));
    return 0;
}