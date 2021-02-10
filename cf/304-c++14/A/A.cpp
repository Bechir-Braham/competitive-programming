#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin (), (x).end ()
#define rall(x) (x).rbegin (), (x).rend ()
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

int bi_less (ll *t, ll val, int a, int b)
{
    int mid = (b + a) / 2;
    if (b < a) {
        if (b < 0) {
            return 0;
        }
        return b;
    }
    if (val == t[mid]) return mid;
    if (val < t[mid]) return bi_less (t, val, a, mid - 1);
    if (val > t[mid]) return bi_less (t, val, mid + 1, b);
    return -1;
}
void solve ()
{
    int n;
    cin >> n;
    int tmp = 1;
    // bool t[100000001]={};
    bool t[10001] = {};
    int count = 0;
    lp (n) { t[(i + 1) * (i + 1)] = true; }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            tmp = i * i + j * j;
            if (t[tmp]) {
                if (tmp*tmp <= n*n) count++;
            }
        }
    }
    cout << count << endl;
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
