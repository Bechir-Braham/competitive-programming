#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
const long long INF = 1e6 + 10;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

vector<ll> m;

bool solved[INF] = {};
void solve ()
{
    ll x;
    cin >> x;
    if (x < 3)
        cout << "NO\n";
    else if (solved[x])
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int times = 1;
	freopen ("rock.in", "r", stdin);
    cin >> times;
    ll tmp = 1;
    for (int i = 2; i < INF; i++) {
        tmp += i;
        m.PB (tmp);
        int j = 1;
        if (tmp < INF and !solved[tmp])
            while (tmp * j < INF) {
                solved[tmp * j] = true;
                j++;
            }
    }
    solved[0] = true;
    solved[1] = false;
    solved[2] = false;
    auto it = m.begin ();

    for (int i = 3; i < INF; i++) {
        solved[i] = false;
        if (*it <= i) it++;
        for (auto x = m.begin (); x != it; x++) {
            if ((i - *x) >= 0)
                if (solved[i - *x]) {
                    solved[i] = true;
					break;
                }
        }
		if(solved[i]==false)cout<<i<<endl;
    }
    while (times--) {
        solve ();
    }

    return 0;
}
