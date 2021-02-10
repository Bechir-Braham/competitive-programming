#include <bits/stdc++.h>
#include <utility>
#include <vector>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int n,maxix=0,current=0;
	vector<pair<ll,int>>v;
	ll a,b;
	cin>>n;
	lp(n){
		cin>>a>>b;
		v.push_back(make_pair(a,1));
		v.push_back(make_pair(b,-1));
	}
	sort(v.begin(),v.end());
	for(auto x:v){
		current+=x.second;
		maxix=max(maxix,current);
	}
	cout<<maxix<<endl;


    return 0;
}
