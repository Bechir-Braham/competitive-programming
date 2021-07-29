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
char t[4][4];
void check()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (t[i][j] == t[i + 1][j] and t[i+1][j] == t[i][j + 1] and t[i][j+1]== t[i + 1][j + 1]) {
                cout << "YES\n";
                exit(0);
            }
        }
    }
    return;
}
void solve()
{
    lp(4)
    {
        for (ll j = 0; j < 4; j++) { cin >> t[i][j]; }
    }
    check();
    lp(4)
    {
        for (ll j = 0; j < 4; j++) {
            if (t[i][j] == '.') {
                t[i][j] = '#';
                check();
                t[i][j] = '.';
            } else {
                t[i][j] = '.';
                check();
                t[i][j] = '#';
            }
        }
    }
    check();
    cout << "NO" << endl;
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
