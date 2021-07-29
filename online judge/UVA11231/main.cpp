#include <bits/stdc++.h>
const long long INF = 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
	int n,m,a;
	cin>>n>>m>>a;
	while(not(n==0 and m==0 and a==0)){
	ll ans=0;
	while(m-8>=0){
		if(a==1){
			a=0;
			if(n>=8)
			ans+=(n-6)/2;
		}
		else {
			a=1;
			if(n-1>=8)
			ans+=(n-7)/2;
		}
		m--;
	}
	cout<<ans<<"\n";

	

cin>>n>>m>>a;
}}

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
