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
ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
void solve()
{
	ll n;
	while(1){
		cin>>n;
		if(n==0)return;
		vector<ll>v;
		ll tmp,a,b,c;
		lp(n){
			cin>>tmp;
			v.PB(tmp);
		}
		ld countp=0,countd=0;
		for(auto it=v.begin();it!=v.end();it++){
			for(auto it1=it+1;it1!=v.end();it1++){
				if(it!=it1){
					if(gcd(*it,*it1)==1)countp++;
					countd++;

			}
		}}
		if(countp==0)printf("No estimate for this data set.\n");
		else{
			double ans=0.0;
			ans=sqrt(6.0*(countd)/(countp));
			printf("%0.6f\n",ans);
		}
	}


}

int main()
{
    int times= 1;
    while(times--) {
        solve();
    }

    return 0;
}
