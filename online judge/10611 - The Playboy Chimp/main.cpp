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
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    lp(n) { cin >> v[i]; }
    sort(all(v));
    int q;
    cin >> q;
    while (q--) {
        ll h;
        cin >> h;
        auto it = lower_bound(all(v), h);
        if (it == v.begin()  ) {
            cout << "X ";
        }
        else 
        {
            it--;
            cout<<*it<<" ";
        }

        it = upper_bound(all(v), h);
        if (it == v.end()) {
            cout << "X";
        } else
            cout << *it;
        cout << endl;
    }
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
