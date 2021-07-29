#include <bits/stdc++.h>
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
char t[120][120];
int n, m;
set<char> s;
char f(int i, int j)
{
    if (i >= 0 and i < n and j >= 0 and j < m) {
        return t[i][j];
    } else {
        return '.';
    }
}
void solve()
{
    vector<int> v;
    char c;
    s.insert('.');
    cin >> n >> m >> c;
    s.insert(c);
    lp(i, n)
    {
        lp(j, m) { cin >> t[i][j]; }
    }
    lp(i, n)
    {
        lp(j, m)
        {
            if (t[i][j] == c) {
                s.insert(f(i + 1, j));
                s.insert(f(i, j + 1));
                s.insert(f(i - 1, j));
                s.insert(f(i, j - 1));
            }
        }
    }
    cout << s.size() - 2 << endl;
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
