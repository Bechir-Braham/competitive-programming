#include <bits/stdc++.h>
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
	vector<ll> v;
	ll a;
	ll cur=-INF,ans=-INF;
	lp(n){
		cin>>a;
		v.PB(a);
	}
	for(auto val :v){
		cur=max(val,cur+val);
		ans=max(ans,cur);
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
