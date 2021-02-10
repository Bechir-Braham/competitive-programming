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

void solve ()
{
    int n, a;
    cin >> n>>a;
    a--;
    vector<int> v;
    lp (n)
    {
        int x;
        cin >> x;
        v.PB (x);
    }
    int i = 0;
    if (v[a]) i++;
    v[a] = 0;
    for (int j = 1; j <= min (n - a-1 , a); j++) {
        if (v[a - j] == 1 and v[a + j] == 1) {
            i += 2;
        }
        v[a - j] = 0;
        v[a + j] = 0;
    }

    cout << i + count (v.begin (), v.end (), 1);
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
