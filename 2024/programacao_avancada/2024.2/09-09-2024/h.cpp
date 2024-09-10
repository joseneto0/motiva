#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5+2;

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

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), pref(n+1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    if (a[0] != 1){
        esac("NO");
        return;
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++){
        pref[i] = pref[i-1] + a[i];
    }
    for (int i = 1; i < n; i++){
        if (pref[i-1] < a[i]){
            esac("NO");
            return;
        }
    }
    esac("YES");
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}