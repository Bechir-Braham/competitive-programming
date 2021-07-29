#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e5 + 7;
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
    vector<int> v;
    lp(n)
    {
        int tmp;
        cin >> tmp;
        v.PB(tmp);
    }
    int c[MAXN] = {};
    for (int x : v) { c[x]++; }
    vector<pair<int, int>> p;
    int last = -1;
    sort(all(v));
    for (int i = 0; i < n;) {
        if (v[i] != last) {
            last = v[i];
            p.PB({c[v[i]], v[i]});
        }
        while (i<n and  v[i] == last ) i++;
    }
    sort(rall(p));
    v.clear();
    for (auto x : p) {
        while (x.first--) { v.PB(x.second); }
    }
    // for (auto a : p) { cout << a.first << " " << a.second << endl; }
    // for (auto x : v) { cout << x << " "; }
    // cout << endl;
    int t[MAXN] = {};
    int j = 0;
    for (int i = 0; i < n; i += 2) { t[i] = v[j++]; }
    for (int i = 1; i < n; i += 2) { t[i] = v[j++]; }
    // lp(n)cout<<t[i]<<' ';
    // cout<<endl;
    lp(n - 1)

    {
        if (t[i] == t[i + 1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << endl;
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
