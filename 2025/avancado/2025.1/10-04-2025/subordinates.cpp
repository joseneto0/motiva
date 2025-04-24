#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define lenLL(x) (ll)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
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
vector<vector<int>> adj;
vector<bool> vis;
vector<int> a;
 
void dfs(int i){
    vis[i] = true;
    int ans = 0;
    for (auto x: adj[i]){
        if (!vis[x]){
            dfs(x);
            ans += a[x] + 1;
        }
    }
    a[i] = ans;
}
 
int main(){
    ios;
    int n, aux;
    cin >> n;
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    a.assign(n+1, 0);
    for (int i = 2; i <= n; i++){
        cin >> aux;
        adj[aux].push_back(i);
    }
    dfs(1);
    bugV(a);
    for (int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}
