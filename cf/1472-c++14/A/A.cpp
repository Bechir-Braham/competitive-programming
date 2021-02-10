#include <bits/stdc++.h>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    int w, h, n;
    cin >> w >> h >> n;
    ll count = 1;
    while (h % 2 == 0) {
        h /= 2;
        count *= 2;
    }
    while (w % 2 == 0) {
        w /= 2;
        count *= 2;
    }
    if (count >= n) {
        cout << "YES\n";
    } else
        cout << "NO\n";
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
