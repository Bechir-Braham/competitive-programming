#include <bits/stdc++.h>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

long long comb (ll n, ll k)
{
    ll ret = 1;
    for (ll i = 1; i <= k; i++) {
        ret *= n--;
        ret /= i;
    }
    return ret;
}
void solve ()
{
    while (1) {
        ll n, k;
        cin >> n >> k;
        if (!n) break;
		ll ans;
		if(k>n/2) ans=comb(n,n-k);
		else ans=comb(n,k);
		cout<<n<<" things taken "<<k<<" at a time is "<<ans<<" exactly."<<endl;
    }
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
