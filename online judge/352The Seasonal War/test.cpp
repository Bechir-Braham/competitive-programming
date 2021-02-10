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
#define lpj(n)  for (int j = 0; j < (n); j++)
set<pair<int, int>> s;
int cnt = 0;
int n;
int t[26][26] = {};
void dfs(int i, int j, int from)
{
    if (i > n - 1 or i < 0 or j > n - 1 or j < 0) return;
    if (t[i][j] == 0) return;

    if (s.find({i, j}) != s.end()) { return; }
    s.insert({i, j});
    if (from == 1) cnt++;

    dfs(i + 1, j, 0);
    dfs(i - 1, j, 0);
    dfs(i, j + 1, 0);
    dfs(i, j - 1, 0);

    dfs(i + 1, j - 1, 0);
    dfs(i + 1, j + 1, 0);
    dfs(i - 1, j - 1, 0);
    dfs(i - 1, j + 1, 0);
}


int x=1;
void solve()
{
    while (cin >> n) {
        string st;

        for (int i = 0; i < n; i++) {
            cin >> st;
            for (int j = 0; j < n; j++) { t[i][j] = st[j] - 48; }
        }
        lp(n)
        {
            for (int j = 0; j < n; j++) {
                if (t[i][j] == 1) { dfs(i, j, 1); }
            }
        }
        cout<<"Image number "<<x++<<" contains "<<cnt<<" war eagles."<<endl;
        s.clear();
        cnt=0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    // cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
