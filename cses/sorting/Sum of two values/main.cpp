#include <bits/stdc++.h>
#include <utility>
#include <vector>
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
	ll x,tmp;
	vector<pair<ll, int>>v;
    cin >> n>>x;
	lp(n){
		cin>>tmp;
		v.PB(MK(tmp,i));
	}
	sort(v.begin(),v.end());
	int i=0,j=n-1;
	while(i<j){
		if(v[i].first+v[j].first==x){
			cout<<v[i].second+1<<" "<<v[j].second+1<<endl;
			return;
		}
		if(v[i].first+v[j].first<x){
			i++;
		}
		else j--;
	}
	cout<<"IMPOSSIBLE"<<endl;



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
