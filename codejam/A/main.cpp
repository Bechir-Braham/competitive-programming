#include <bits/stdc++.h>
#include <utility>
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
void solve(int xx)
{
    int n, m;
    cin >> n;
    vector<int> v((unsigned)n);
    vector<pair<int, int>> b;
    lp(i, n) { cin >> v[i]; }
    ll sum = 0;
    for (ll i = 0; i < n-1; i++) {
        int j = 0;
        int val = 100000;
        for (int k = i; k < n; k++) {
            if (v[k] < val) {
                j = k;
                val = v[k];
            }
        }
            reverse(v.begin() + i, v.begin() + j + 1);
            sum += j - i + 1;
    }
    cout <<"Case #"<<xx<<": "<<sum << endl;
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
    for(int i=1;i<=times;i++) { solve(i); }
    return 0;
}
