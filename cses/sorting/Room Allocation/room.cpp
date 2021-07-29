#include <bits/stdc++.h>
#include <set>
#include <vector>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    multiset<pair<ll, ll>> rooms;
    multiset<pair<ll, ll>> out;
    lp (n) rooms.insert ({ 0, i + 2 });
    ll a, b, c;
    vector<ll> v;
    int time = 0;
    cin >> a >> b;
    time = b;
	rooms.insert({1,1});
	out.insert({b,1});
    lp (n - 1)
    {
        cin >> a >> b;
        time = b;
        pair<ll, ll> tmp;
        auto it = out.begin();
        if (it->first >= time) {
            //?it->first=0
            rooms.erase (rooms.find ({ 1, it->second }));
            rooms.insert ({ 0, it->second });
            out.erase (it);
        }
        it = rooms.begin ();
        tmp = MP (b, it->second);
        rooms.erase (it);
        rooms.insert ({ 1, tmp.second });
        out.insert ({b, tmp.second});
        v.PB (tmp.second);
    }
    cout << *max_element (v.begin (), v.end ()) << "\n";
	cout<<1<<" ";
    lp (v.size ()) cout << v[i] << " ";
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
