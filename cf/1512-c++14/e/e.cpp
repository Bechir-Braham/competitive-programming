#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)

int n, l, r, s;
vector<int> v(1000);
bool check(int a, int x)
{
    for (int i = l; i <= r; i++) {
        if (v[i] == x) return true;
    }
    for (int i = 1; i < a; i++) {
        if (v[i] == x) return true;
    }
    return false;
}

void solve()
{
    cin >> n >> l >> r >> s;
    lp(i, 1000) v[i] = -1;
    int j = 1;
    for (int i = l; i <= r; i++) {
        v[i] = j;
        s -= j++;
    }
    if (s < 0) {
        cout << -1 << endl;
        return;
    }

    int m = n;
    if (s != 0) {
        for (int i = r; i >= l; i--) {
            while (v[i] < m) {
                v[i]++;
                s--;
                if (s == 0) break;
            }
            if (s == 0) break;
            m--;
            if (m < 1) break;
        }
    }
    if (s != 0) {
        cout << -1;
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (i < l or i > r)
            for (int j = 1; j <= n; j++) {
                if (!check(i,j)) {
                    v[i] = j;
                    break;
                }
            }
    }
    for (int i = 1; i <= n; i++) cout << v[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
