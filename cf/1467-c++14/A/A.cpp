#include <bits/stdc++.h>
#include <string>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin (), (x).end ()
#define rall(x) (x).rbegin (), (x).rend ()
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;
void solve ()
{
    int n, m;
    string s = "";
    cin >> n;
    int x = 0;
    if (n == 1) {
        cout << 9 << endl;
        return;
    } else if (n == 2) {
        cout << 98 << endl;
        return;
    }
    if (n == 3) {
        cout << 989 << endl;
        return;
    }
    cout << 989;

    lp (n - 3)
    {
        s += to_string (x);
        x = (x + 1) % 10;
    }
    cout << s << endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
    }
    return 0;
}
