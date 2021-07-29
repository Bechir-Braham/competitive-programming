#include <bits/stdc++.h>
const long long INF = 1e5 + 7;
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
ll ask (ll x)
{
    cout.flush ();
    cout << "? " << x << endl;
    cout.flush ();
    ll tmp;
    cin >> tmp;
    return tmp;
}
ll k, n;
void solve ()
{
    cin >> n >> k;
    bool found = false;
    ll mid = n, ans, cnt = 0;
    ll shift = 0;
    ll t = 0;
    while (1) {
        ans = ask (shift + mid);
        cnt++;
        if (ans != k) {
            break;
        } else {
            mid /= 2;
            if (mid == 0) {
                if (t == 0) {
                    shift = n / 2;
                    mid = n / 4;
                    t = 1;
                } else {
                    shift = 0;
                    mid = n / 2;
                    t = 0;
                }
            }
        }
    }
    if (ans > k) {
        while (ans > k) {
            mid = (mid + (n + 1) - 1) % (n + 1);
            ans = ask (mid);
        }
    } else {
        while (ans < k) {
            mid = (mid + (n + 1) + 1) % (n + 1);
            ans = ask (mid);
        }
    }
    cout << "! " << mid << endl;
    cout.flush ();
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
