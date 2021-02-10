#include <bits/stdc++.h>
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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
	if(((d/t)+1)*k>=n)cout<<"NO\n";
	else cout<<"YES\n";

    // if(time1==time2)cout<<"NO\n";
    // else cout<<"YES\n";
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
