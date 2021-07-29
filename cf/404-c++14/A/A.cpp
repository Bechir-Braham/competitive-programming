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

void solve ()
{
    int n;
    cin >> n;
    char t[400][400] = {};
    lp (n)
    {
        for (ll j = 0; j < n; j++) {
            cin >> t[i][j];
        }
    }
    char c1, c2;
    c1 = t[0][0];
    c2 = t[0][1];
    if (c1 == c2) {
        cout << "NO\n";
        return;
    }

    else {
        lp (n)
        {
            for (int j = 0; j < n; j++) {
                if (i == j and t[i][j] != c1) {
                    // cout<<i<<" "<<j<<c1<<" "<<c2<<" "<<t[i][j]<<endl;
                    cout << "NO\n";
                    return;
                } else if (i + j == n - 1 and t[i][j] != c1) {
                    // cout<<i<<" "<<j<<c1<<" "<<c2<<" "<<t[i][j]<<endl;
                    cout << "NO\n";
                    return;

                } else if (i + j != n - 1 and i != j) {
                    if (t[i][j] != c2) {
                        // cout<<i<<" "<<j<<c1<<" "<<c2<<" "<<t[i][j]<<endl;
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "YES\n";
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }

    return 0;
}
