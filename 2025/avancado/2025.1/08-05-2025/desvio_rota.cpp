#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define lenLL(x) (ll)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;

vector<vector<pair<int, int>>> adj;
vector<int> dist;
int n, m, c, k;

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist.assign(n, INF);
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto x : adj[u]) {
            int v = x.first;
            int w = x.second;
            int newDist = dist[u] + w;

            if (u < c - 1 && (v != u + 1)) continue;

            if (dist[v] > newDist) {
                dist[v] = newDist;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    ios;
    while (true) {
        cin >> n >> m >> c >> k;
        if (n == 0 && m == 0 && c == 0 && k == 0) break;

        adj.assign(n, vector<pair<int, int>>());

        for (int i = 0; i < m; i++) {
            int u, v, p;
            cin >> u >> v >> p;
            adj[u].push_back({v, p});
            adj[v].push_back({u, p});
        }

        dijkstra(k);

        esac(dist[c - 1]);
    }

    return 0;
}