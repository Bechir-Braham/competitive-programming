#include <bits/stdc++.h>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define lp(n) for (ll i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    ll n;
    scanf ("%lld", &n);
    ll t[INF];
    int count[100] = {};
    for (int i = 0; i < n; i++) scanf ("%lld", &t[i]);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 62; j++) {
            if (t[i] & (1LL << (j))) {
                count[j]++;
            }
        }
    }
    ll ans1 = 0;
    ll ans2 = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans1 = ans2 = 0;
        for (int j = 0; j < 62; j++) {
            if (t[i] & (1LL << (j))) {
                ll p = (1LL << j) % md;
                ans1 += p * count[j];
                ans2 += n * p;
            } else {
                ll p = (1LL << j) % md;
                ans2 += count[j] * p;
            }
        }

        ans1 %= md;
        ans2 %= md;
        ans = (ans + (ans1 * ans2)) % md;
    }
    printf ("%d\n", ans);
}

int main ()
{
    int times = 1;
    scanf ("%d", &times);
    while (times--) {
        solve ();
    }

    return 0;
}
