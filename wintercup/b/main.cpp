#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
const ll iv = 500000004;

#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
const int len=100000+30;
ll p[len];
void solve()
{
    int n, m;
    cin >> n;
    vector<int> v(n);
    lp(n) { cin >> v[i]; }
    sort(all(v));
    ull sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum = ((v[i] * ((p[i] + p[n - i - 1]) % md))%md + sum) % md;
    }
    cout << (sum * iv) % md << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    unsigned a = 1;
    for (unsigned i = 0; i < len; i++) {
        p[i] = a;
        a = (2 * a) % md;
    }
    int times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
