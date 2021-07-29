#include <bits/stdc++.h>
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
#define lp(i, n) for (int i = 0; i < (n); i++)

void solve()
{
    int n, m;
    cin >> n>>m;
    vector<int> v((unsigned)n);
    vector<int> a((unsigned)m);
    lp(i,n)
    {
        cin>>v[i];
    }
    lp(i,m)
    {
        cin>>a[i];
    }
    int g=a[0];
    for (int i=1; i<m; i++) {
        g=__gcd(g,a[i])        ;

    }
    if(g==1)
    {
        cout<<"Yes";
        return;
    }
    int x=v[0]%g;
    lp(i,n)
    {
        if(v[i]%g!=x)
        {
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";

           
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
