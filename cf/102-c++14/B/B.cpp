#include <bits/stdc++.h>
const long long INF = 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;
ll rec (ll n)
{
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve ()
{
    string n;
    cin >> n;
    ll sum = 0;
    if (n.size () == 1) {
        cout << 0;
        return;
    }
    for (int i = 0; i < n.size (); i++) {
        sum += n[i] - '0';
    }
    int count = 1;
    while (sum > 9) {
        count++;
        sum = rec (sum);
    }
    cout << count;
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
