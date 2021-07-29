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
	vector<ll> v;
	ll tmp;
	lp(4){
		cin>>tmp;
		v.PB(tmp);
	}
	sort(v.begin(),v.end());
	cout<<v[0]*v[2]<<"\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int times= 1;
	cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
