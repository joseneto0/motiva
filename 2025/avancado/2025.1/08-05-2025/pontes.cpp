#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define lenLL(x) (ll)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;

int n, m;
vector<vector<int>> adj;
vector<int> dist, visited;

int dijkstra() {
    dist.assign(n, INF);
    visited.assign(n, 0);
    dist[0] = 0;

    while (true) {
        int node = -1;
        for (int i = 0; i < n; i++) {
            if (!visited[i] && (node == -1 || dist[i] < dist[node])) {
                node = i;
            }
        }

        if (node == -1) break;
        visited[node] = 1;

        for (int i = 0; i < n; i++) {
            if (dist[node] + adj[node][i] < dist[i]) {
                dist[i] = dist[node] + adj[node][i];
            }
        }
    }

    return dist[n - 1];
}

int main() {
    ios;
    cin >> n >> m;
    n += 2; 
    adj.assign(n, vector<int>(n, INF));

    for (int i = 0; i < m; i++) {
        int s, t, b;
        cin >> s >> t >> b;
        adj[s][t] = b;
        adj[t][s] = b;
    }

    esac(dijkstra());
    return 0;
}