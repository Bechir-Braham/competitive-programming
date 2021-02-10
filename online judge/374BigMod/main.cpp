#include <bits/stdc++.h>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for(int i= 0; i < n; i++)
using namespace std;

ll prod(ll b, ll p,ll m){
	if(p==1)return b%m;
	if (p==0)return 1;
	if(p%2==0){
		return (prod(b,p/2,m)*prod(b,p/2,m))%m;
	}
	else {
	return (prod(b,p/2+1,m)*prod(b,p/2,m))%m;
	}
}

void solve()
{
	ll b,r,p,m;
	while(cin>>b>>p>>m){
		cout<<prod(b,p,m)<<"\n";

	}


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
