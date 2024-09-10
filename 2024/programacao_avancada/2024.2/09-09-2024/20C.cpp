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

vector<vector<pll>> adj;
vector<ll> dist;
vector<ll> path;

ll n, m;

void dijkstra(ll s){
    priority_queue<pll, vector<pll>, greater<pll>> pq;;
    pq.push({0, s});
    dist[s] = 0;
    path[s] = -1;
    while (!pq.empty()){
        ll u = pq.top().second;
        if (u == n) return;
        pq.pop();
        for (auto x: adj[u]){
            ll v = x.first;
            ll w = x.second;
            if (dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                path[v] = u;
            }
        }
    }
}

int main(){
    ios;
    cin >> n >> m;
    adj.assign(n+5, vector<pll>());
    dist.assign(n+5, LINF);
    path.assign(n+5, 0);
    f(i, 0, m){
        ll x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
    dijkstra(1);
    if (dist[n] == LINF){
        esac(-1);
    } else {
        vector<int> ans;
        ll aux = n;
        while (aux != -1){
            ans.push_back(aux);
            aux = path[aux];
        }
        for (int i = len(ans)-1; i >= 0; i--){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}