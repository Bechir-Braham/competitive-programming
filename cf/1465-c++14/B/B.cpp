#include <bits/stdc++.h>
#include <vector>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;
vector<ll> dig (ll x)
{
    vector<ll> s;
    int a;
    while (x > 0) {
        a = x % 10;
        if (a) s.PB (a);
        x /= 10;
    }
    return s;
}

void solve ()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < 3000; i++) {
        v = dig (n + i);
        bool val = false;
        for (auto j : v) {
            if ((n + i) % j != 0) {
                val = true;
                break;
            }
        }
        if (val == false) {
            cout << n + i << "\n";
            break;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int times = 1;
    cin >> times;

    while (times--) {
        solve ();
    }

    return 0;
}
