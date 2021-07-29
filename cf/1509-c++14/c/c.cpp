#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (ll i = 0; i < (n); i++)


/*
 *
 */

ll t[MAXN];
ll n;
ll f()
{
    ll m = 1e10;
    ll x = -1;
    lp(i, n)
    {
        if (t[i] != -1) {
            m = min(m, (ll)t[i]);
            x = max(x, (ll)t[i]);
        }
    }
    return x - m;
}
void solve()
{
    cin >> n;
    lp(i, n) { cin >> t[i]; }
    ll sum = 0;
    sum = f();
    ll x;
    vector<ll> res;
    lp(i, n - 1)
    {
        ll best = 1e10;
        ll bi;
        ll tmp;
        lp(j, n)
        {
            if (t[j] != -1) {
                x = t[j];
                t[j] = -1;
                tmp = f();
                if (tmp < best) {
                    bi = j;
                    best = tmp;
                }
                t[j] = x;
            }
        }
        t[bi] = -1;
        sum += best;
    }
    cout<<sum<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
