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
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)

void solve()
{
    int n, m;
    cin >> n;
    char c[500][500];
    vector<pair<int, int>> v;

    lp(i, n)
    {
        lp(j, n)
        {
            cin >> c[i][j];
            if (c[i][j] == '*') { v.PB({i, j}); }
        }
    }
    int i1 = v[0].first, j1 = v[0].second, i2 = v[1].first, j2 = v[1].second;
    if (i1 == i2) {
        int a = i1 + 1;
        if (a >= n) a = i1 - 1;
        c[a][j1] = '*';
        c[a][j2] = '*';
    }
    if (j1 == j2) {
        int a = j1 + 1;
        if (a >= n) a = j1 - 1;

        c[i1][a] = '*';
        c[i2][a] = '*';
    } else {
        c[i1][j2] = '*';
        c[i2][j1] = '*';
    }
    lp(i, n)
    {
        lp(j, n) { cout << c[i][j]; }
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
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
