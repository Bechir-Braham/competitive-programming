#include <bits/stdc++.h>
#include <set>
#include <tuple>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

// void print (multiset<tuple<ll,ll,ll>> v)
// {

    // for (auto sa : v) {
        // ll a = get<1> (sa);
        // ll b = get<2> (sa);
        // cout << " tuple=(" << b - a << " " << a << " " << b << ")" << endl;
    // }
// }
void solve ()
{
    int n;
    ll x, tmp;
    cin >> x >> n;
    multiset<ll> m;
    multiset<tuple<ll, ll, ll>> v;
    m.insert (0);
    m.insert (x);
    v.insert ({ x, 0, x });
    while (n--) {
        cin >> tmp;
        auto it = m.insert (tmp);
		it++;
        auto ip2 = *(it);
        it--;
        it--;
        auto ip1 = *(it);
        auto it2 = v.find ({ ip2 - ip1, ip1, ip2 });
        v.erase (it2);
        v.insert ({ tmp - ip1, ip1, tmp });
        v.insert ({ ip2 - tmp, tmp, ip2 });
        auto y = v.end ();
        y--;
        cout << get<0> (*y)<<" ";
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
