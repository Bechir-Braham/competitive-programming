#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define lp(n) for(int i= 0; i < n; i++)
using namespace std;
ll gcd(ll a,ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
	
}
void solve(){
	int t[100]={};
	int n;
	cin>>n;
	lp(n)cin>>t[i];
	for(int i=1;i<n;i++){
		if(t[i]==t[i-1])continue;
		ll p=gcd(t[i],t[i-1]);
		t[i]*=p;
	}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,q;
	cin>>q;
	while(q--)
		solve();


    return 0;
}
