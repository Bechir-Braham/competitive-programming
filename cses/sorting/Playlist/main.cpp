#include <bits/stdc++.h>
#include <map>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

void solve ()
{
    int n, count = 0, ans = 0;
    cin >> n;
    ll x, a, c;
    unordered_map<ll, int> mp;
    ll p[200001];
    lp (n) { cin >> p[i]; }
	for (int i = 0, j = 0; i < n; i++) {
		while(j<n and mp[p[j]]<1){
			mp[p[j]]++;
			j++;
		}
		ans=max(j-i,ans);
		mp[p[i]]--;
	}

    cout << ans << endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int times = 1;
    while (times--) {
        solve ();
    }

    return 0;
}
