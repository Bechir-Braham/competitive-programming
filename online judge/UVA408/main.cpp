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
	ll x,y;
	while(cin>>x>>y){
		cout << setw(10) << x << setw(10) << y << "    ";
		if(__gcd(x,y)==1){
			cout<<"Good Choice"<<"\n\n";
		}
		else{
			cout<<"Bad Choice"<<"\n\n";
		}

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
