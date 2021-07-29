#include <bits/stdc++.h>
#include <utility>
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
    int n, b;
    cin >> n >> b;
    int w[1020];
    lp(n) cin >> w[i];
    vector<pair<int, ll>> v;
    pair<int, ll> tmpp;
    int x;
    lp(n)
    {
        cin >> x;
        tmpp = {x, w[i]};
        v.PB(tmpp);
    }
    vector<pair<int, ll>> best;
    sort(all(best));
    if (w[0] >= b)
        best.PB({0, w[0]});
    else {
        best.PB({1, w[0]});
    }
    for (int i = 1; i < n; i++) {
        tmpp = {0, 0};
        for (int j = 0; j < i; j++) {
            if ((best[j].first + 1) > tmpp.first)
                if (best[j].second + w[i] < b) {
                    tmpp = {best[j].first + 1, best[j].second + w[i]};
                }
        }

    best.PB({1, 1});
    best[i].first = tmpp.first;
    best[i].second = tmpp.second;
}
if(best[n-1].first==-1)
{
    cout<<0<<'\n';
    return;
}
cout << best[n - 1].first << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
