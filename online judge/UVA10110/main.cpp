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
	ll n;
	ll i;
	cin>>n;
	bool found;
	while(n!=0){
		found=false;
		for(i=1;i*i<=n;i++){
			if(i*i==n){
				cout<<"yes\n";
				found=true;
			}

		}
		if(!found)cout<<"no\n";
		cin>>n;
		
	}


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
