#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e18 + 7;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin (), (x).end ()
#define rall(x) (x).rbegin (), (x).rend ()
#define lp(n) for (int i = 0; i < (n); i++)
ll n, k;
ll sum = (k) * (k + 1) / 2 - 1 - (k - 2);
using namespace std;
bool possible (ll m)
{
    if (sum > n) return false;
    ll tmp = n;
    for (ll i = k; i > 1; i--) {
        n -= i;
        if (m == 0 and n > 0) {
            return false;
        }
        if (n < 0) {
            n += i;
        }
    }
}
void solve ()
{
    string s;
    cin >> n >> k;
    ll a = 1, b = INF;
    ll mid = (a + b) / 2;
    mid = (a + b) / 2;
    while (a <= b) {
        if (possible (mid)) {
            b = a - 1;
        } else {
            a = b + 1;
        }
        mid = (a + b) / 2;
    }
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }
    return 0;
}
