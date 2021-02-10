#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)

void solve()
{
    int n, m;
    string s;
    cin >> n;
    vector<ll> v(n);
    vector<ll> z(n);
    lp(n) cin >> v[i];
    z = v;
    bool fin = false;
    bool used = false;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            if (used == true) {
                fin = true;
                break;
            }
            used = true;
            swap(v[i], v[i + 1]);
        }
        v[i + 1] -= v[i];
    }
    if (fin == false and v[n - 1] == 0) {
        cout << "YES\n";
        return;
    }
    used = false;
    for (int i = 0; i < n - 1; i++) {
        if (z[i] > z[i + 1]) {
            if (used == true) {
                cout << "NO\n";
                return;
            }
            used = true;
            if (i + 2 < n) swap(z[i + 1], z[i + 2]);
        }
        z[i + 1] -= z[i];
    }
    if (z[n - 1] == 0) {
        cout << "YES\n";
        return;
    }
    lp(n) cout << z[i] << " ";
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
