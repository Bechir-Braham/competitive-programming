#include <bits/stdc++.h>
#include <exception>
#include <utility>
#include <vector>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for(int i= 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
	vector<pair<ll,ll>>v;
	ll a,b;
	cin>>n;
	lp(n){
		cin>>a>>b;
		v.PB(MK(b,a));
	}
	sort(v.begin(),v.end());
	int count=0;
	ll current_time=0;
	lp(n){
		if(v[i].second>=current_time){
			current_time=v[i].first;
			count++;
		}

	}
	cout<<count<<endl;


    return 0;
}
