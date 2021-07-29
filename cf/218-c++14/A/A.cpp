#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
int t[MAXN] = {};
int n, k;
bool check(int i)
{
    if (t[i] - 1 > t[i - 1] and t[i] - 1 > t[i + 1]) { return true; }
    return false;
}
void solve()
{
    cin >> n >> k;
    lp(2 * n + 1) cin >> t[i+1];
    for (int i = 1; i < 2 * n + 1; i++) {
        if (i % 2 == 0 and k > 0) {
            if (check(i)) {
                t[i]--;
                k--;
            }
        }
    }
    lp(2*n+1)cout<<t[i+1]<<' ';
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
