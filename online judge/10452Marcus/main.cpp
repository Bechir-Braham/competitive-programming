#include <bits/stdc++.h>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin (), (x).end ()
#define rall(x) (x).rbegin (), (x).rend ()
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

bool visited[10][10] = {};
char t[10][10];
int n, m;
int start[2];
int e[2];
char w[] = "IEHOVA#";
void dfs (int id, int i, int j)
{
    if (id == 7) return;
    if(id>0)cout<<" ";
    if (i > 0 and t[i - 1][j] == w[id]) {
        cout << "forth";
        dfs (id + 1, i - 1, j);

    } else if (j > 0 and t[i][j - 1] == w[id]) {
        cout << "left";
        dfs (id + 1, i, j - 1);

    } else if (j < m - 1 and t[i][j + 1] == w[id]) {
        cout << "right";
        dfs (id + 1, i, j + 1);
    }
}
void solve ()
{
    string s;
    cin >> n >> m;

    lp (n)
    {
        for (ll j = 0; j < m; j++) {
            cin >> t[i][j];
            if (t[i][j] == '@') {
                start[0] = i;
                start[1] = j;
            } else if (t[i][j] == '#') {
                e[0] = i;
                e[1] = j;
            }
        }
    }
    dfs (0, start[0], start[1]);
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // cout << fixed << setprecision (0);
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
        cout << endl;
    }

    return 0;
}
