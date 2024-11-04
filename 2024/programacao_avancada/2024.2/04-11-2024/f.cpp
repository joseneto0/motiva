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

int main(){
    ios;
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    bool possivel = false;
    for (int i = 1; i <= n; i++){
        if (a[a[a[i]]] == i){
            possivel = true;
            break;
        }
    }
    if (possivel) {
        esac("YES");
    } else {
        esac("NO");
    }
    return 0;
}
