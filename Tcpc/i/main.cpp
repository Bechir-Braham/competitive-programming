#include <bits/stdc++.h>
#include <unordered_set>
#define PI 3.14159265359
#define fn(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define speed                          \
    ios_base::sync_with_stdio (false); \
    cin.tie (0);                       \
    cout.tie (0);
using namespace std;
void solve ()
{
    int n;
    cin >> n;
    ll arr[n], so[n];
    set<ll> s;
    // memset(so,0,sizeof(so));
    fn (i, n)
    {
        cin >> arr[i];
        so[i] = arr[i];
        s.insert (arr[i]);
    }
    sort (so, so + n);
    int times = 0;
    fn (i, n)
    {
        if (so[i] != arr[i]) times++;
        if (times > 2) {
            cout << "NO\n";
            return;
        }
    }
    if (times == 2)
        cout << "YES\n";
    else if (times == 0) {
        if (s.size () != n)
            cout << "YES\n";
        else
            cout << "NO\n";
    } else if (times == 1)
        cout << "NO\n";
}
int main ()
{
    speed;
	freopen ("one.in", "r", stdin);
    solve ();
}
