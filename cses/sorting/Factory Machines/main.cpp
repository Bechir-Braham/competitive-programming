#include <bits/stdc++.h>
#include <vector>
const long long INF = 1e18 + 7;
typedef unsigned long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (ll i = 0; i < (n); i++)
using namespace std;
ll n, t, tmp;
vector<ll> v;

bool valid (ll time)
{
    ll sum = 0;
    for (ll c : v) {
        sum += time / c;
    }
    if (sum >= t) return true;
    return false;
}
void solve ()
{
    cin >> n >> t;
    lp (n)
    {
        cin >> tmp;
        v.PB (tmp);
    }
    ll x = -1;
    for (ll b =INF; b >= 1; b /= 2) {
        while (!valid (x + b)) x += b;
    }
    cout << x + 1;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }

    return 0;
}
