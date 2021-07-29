#include <algorithm>
#include <bits/stdc++.h>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
	ll t[100000+50];
	lp(n)cin>>t[i];
	cout<<t[1]-t[0]<<" "<<t[n-1]-t[0]<<endl;
	for(int i=1;i<n-1;i++){
		cout<<min(t[i+1]-t[i],t[i]-t[i-1])<<" "<<max(t[n-1]-t[i],t[i]-t[0])<<endl;
	}
	cout<<t[n-1]-t[n-2]<<" "<<t[n-1]-t[0]<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	// freopen("f.in", "r", stdin);
    int times= 1;
	// cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
