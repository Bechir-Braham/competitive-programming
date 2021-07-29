#include <bits/stdc++.h>
#include <vector>
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
    ll n;
    cin >> n;
    ll a;
    vector<ll> v;
    lp (n)
    {
        cin >> a;
        v.PB (a);
    }
	ll sum=0;
	sort(v.begin(),v.end());
	lp(n){
		sum+=abs(v[i]-v[n/2]);
	}
	cout<<sum<<endl;

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
