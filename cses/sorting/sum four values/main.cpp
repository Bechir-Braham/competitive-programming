#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>
#include <vector>
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
    ll x, n;
    cin >> n>>x;
	unordered_map<ll, pair<ll,ll>>m;
	m.reserve(1<<20);
	ll t[INF];
	lp(n){
		cin>>t[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(m.find(x-t[i]-t[j])!=m.end()){
				cout<<i+1<<" "<<j+1<<" "<<m[x-t[i]-t[j]].first+1<<" "<<1+m[x-t[i]-t[j]].second<<endl;
				return;
			}
			for(int j=0;j<i;j++){
				m[t[i]+t[j]]={i,j};
			}
		}
	}
	cout<<"IMPOSSIBLE";


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
