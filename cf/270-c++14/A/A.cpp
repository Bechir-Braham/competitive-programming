#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
using namespace std;
vector<ll> v;
void solve()
{
    ll n;
    cin>>n;
    if(binary_search(all(v),n)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    for (int i = 3; i < 1000; i++) {
        ld x = (ld)(i - 2) * 180 / (ld)i;
        if (ceil(x) - floor(x) < 0.5) { v.PB((ll)x); }
    }
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin>>times;
    while (times--) { solve(); }
    return 0;
}
