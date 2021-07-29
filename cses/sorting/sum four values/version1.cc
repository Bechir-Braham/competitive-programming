#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#include <vector>
const long long INF = 1e5 + 7;
typedef unsigned long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (ll i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    ll x, n;
    cin >> n >> x;
    ll tmp;
    vector<pair<ll, ll>> v;
    lp (n)
    {
        cin >> tmp;
        v.PB ({ tmp, i });
    }
    sort (v.begin (), v.end ());
    ll i, j, k, w;
    for (i = 0; i < n; i++) {
        j = i + 1;
        k = n - 1;
        while (j < k) {
            tmp = x - v[i].first - v[j].first - v[k].first;
            w = lower_bound (v.begin (), v.begin () + i , MP (tmp, 0ull)) - v.begin ();
            if (w == n or w == i) break;
			if(v[k].first+v[w].first+v[i].first+v[j].first>x)k--;
			else if(v[k].first+v[w].first+v[i].first+v[j].first<x)j++;
			else {
                cout << v[i].second + 1 << " " << v[j].second + 1 << " " << v[k].second + 1 << " "
                     << v[w].second + 1 << endl;
                return;
            }

        }
    }
    cout << "IMPOSSIBLE" << endl;
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
