#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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
    ll n, k;
    cin >> n >> k;
    ll tmp;
    ll v[n];
    lp (n)
    {
        cin >> tmp;
        v[i] = (tmp);
    }
    int t[n];
    lp (n) t[i] = -1;
    t[0] = v[0];
    t[n - 1] = v[n - 1];
    int first = max_element (v + 0, v + n) - v;
    t[first] = v[first];
    for (int i = first + 1; i < n - 1; i++) {
        t[i] = max (t[i - 1] + 1 - k, v[i]);
    }
    for (int i = first - 1; i > 0; i--) {
        t[i] = max (t[i + 1] + 1 - k, v[i]);
    }
	int i;
	// lp(n)cout<<t[i]<<" ";
	// cout<<endl;
    for (i = 0; i < n - 1; i++) {
        if (t[i] > k - 1 + v[i]) {
            cout << "NO\n";
            return;
        }
        if (t[i] + k <= t[i + 1]) {
            cout << "NO\n";
            return;
        }
        if (t[i + 1]+k <= t[i]) {
            cout << "NO\n";
            return;
        }
    }
    if (t[i] > k - 1 + v[i]) {
        cout << "NO\n";
        return;
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
    cin >> times;
    while (times--) {
        solve ();
    }

    return 0;
}
// t[i]+k<=t[i+1]
// t[i]>=t[i+1]+k
