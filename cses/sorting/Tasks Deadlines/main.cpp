#include <bits/stdc++.h>
#include <utility>
#include <vector>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for(int i= 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
	vector<pair<ll, ll>> v;
	ll a,b;
	lp(n){
		cin>>a>>b;
		v.PB({a,b});
	}
	sort(v.begin(),v.end());
	ll count=0;
	ll ans=0;
	for(auto task: v){
		count+=task.first;
		ans+=task.second-count;
	}
	cout<<ans;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int times= 1;
    while(times--) {
        solve();
    }

    return 0;
}
