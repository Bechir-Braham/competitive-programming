#include <bits/stdc++.h>
#include <cctype>
const long long INF = 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> x;
    for (auto c : s) {
        x.insert (toupper (c));
    }
    if (x.size () == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
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
