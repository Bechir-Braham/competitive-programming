#include <bits/stdc++.h>
#include <functional>
#include <set>
#include <unordered_set>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

void solve ()
{
    ll n, m;
    multiset<pair<ll, ll>,greater<pair<ll,ll>>> s;
    cin >> n >> m;
    lp (m)
    {
        ll a, b;
        cin >> a >> b;
        s.insert ({ b, a });
    }
    ll ans = 0;
    for (auto i : s) {
        ans += min (n, i.second) * i.first;
        n -= min (n, i.second);
        if (n == 0) break;
    }
    cout << ans;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int times = 1;
    while (times--) {
        solve ();
    }

    return 0;
}
