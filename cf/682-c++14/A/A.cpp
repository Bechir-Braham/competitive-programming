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
    int n, m;
    cin >> n >> m;
    ll s = 0;
    ll t[5], p[5];
    for (int i = 0; i < 5; i++) {
        t[i] = n / 5;
        if (n % 5 >= i) t[i]++;
        p[i] = m / 5;
        if (m % 5 >= i) p[i]++;

    }
    t[0]--;
    p[0]--;
    for(int i=0;i<5;i++)
    {
        // cout << t[i] << ' ' << p[i] << endl;
        s+=t[i]*p[(5-i)%5];
    }
    cout << s << endl;
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





// 1 2 3
// 1 2 3 4 5 6 7 8

