#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <utility>
#include <vector>
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
const int l = 1e9+1;
vector<int> d(l, 1);
vector<int> a(l,-1);
void solve()
{
    int n;
    cin >> n;
    cout<<a[n]<<endl;

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
    d[0] = -1;
    int tmp = 1;
    for (int i = 2; i < l; i++) {
        tmp = i;
        while (tmp < l) {
            d[tmp] += i;
            tmp += i;
        }
    }
    ll m = -1;
    int x;
    for (int i = l; i>=1; i--) {
        x = d[i];
        if (x < 1e9 + 1) { a[d[i]] = i; }
    }

    while (times--) { solve(); }
    return 0;
}
