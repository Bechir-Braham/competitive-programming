#include <bits/stdc++.h>
const long long INF = 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;
set<ll> s;
ll calc (ll n, ll m, ll a)
{
    ll ans = 0;
    ans = m / a - n / a;
    if (n % a == 0) ans++;
    return m - n + 1 - ans;
}
ll lcm (ll a, ll b) { return a * b / __gcd (a, b); }
void solve ()
{
    ll n, m, a, d;
    cin >> n >> m >> a >> d;
    ll ans = 0;
    for (int i = 0; i < 5; i++) {
        ans += calc (n, m, a + i * d);
    }
	
	cout<<ans<<endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
    }

    return 0;
}
