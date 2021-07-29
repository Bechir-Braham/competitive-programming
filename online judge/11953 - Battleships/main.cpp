#include <bits/stdc++.h>
#include <cstring>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)
int n;
bool vis[101][101] = {};
char t[101][101] = {};
bool verif(int i, int j)
{
    if (i < n and j < n and i>=0 and j>=0) {
        if (t[i][j] == 'x' or t[i][j] == '@') { return true; }
    }
    return false;
}
void fill(int i, int j, int x, int y)
{
    for (int tmp = 0;verif(i+tmp*x,j+tmp*y); tmp++) {
        if (t[i + x * tmp][j + y * tmp] == '.') return;
        vis[i + x * tmp][j + y * tmp] = true;
    }
}
int pp=0;
void solve(int times)
{
    memset(vis, 0, sizeof(vis));
    memset(t, 0, sizeof(vis));
    pp++;
    cin >> n;
    lp(i, n)
    {
        for (ll j = 0; j < n; j++) { cin >> t[i][j]; }
    }
    int count = 0;
    lp(i, n)
    {
        lp(j, n)
        {
            if (t[i][j] == 'x' and vis[i][j] == false) {
                vis[i][j] = true;
                count++;
                if (verif(i + 1, j)) {
                    fill(i, j, 1, 0);
                } else if (verif(i - 1, j)) {
                    fill(i, j, -1, 0);
                } else if (verif(i, j + 1)) {
                    fill(i, j, -0, 1);
                } else if (verif(i, j - 1)) {
                    fill(i, j, -0, -1);
                }
            }
        }
    }
    cout<<"Case "<<pp<<": "<<count<<endl;
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
    while (times--) { solve(times); }
    return 0;
}
