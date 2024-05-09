#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

using namespace std;

int main(){
    ios;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cont = 0;
    vector<bool> vis1(n, false), vis2(m, false);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (abs(a[i]-b[j]) <= 1 && !vis1[i] && !vis2[j]){
                cont++;
                vis1[i] = true;
                vis2[j] = true;
                break;
            }
        }
    }
    cout << cont << "\n";
    return 0;
}