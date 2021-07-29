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

void solve()
{
    int n;
    cin >> n;
    char t[MAXN];
    lp(n) cin >> t[i];
    int s, f;
    int i = 0;
    while (t[i] == '.') i++;
    if (t[i] == 'R') {
        s = i;
        while (t[i] == 'R') i++;
        if (t[i] == 'L')
            f = i - 1;
        else
            f = i;
    } else if (t[i] == 'L') {
        while(t[i]=='L')i++;
        f=i;
    }
    cout << s + 1 << ' ' << f + 1 << endl;
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
