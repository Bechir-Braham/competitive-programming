#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define lp(n) for(int i= 0; i < n; i++)
using namespace std;

void solve(){
	ll a,b,c;
	cin>>a>>b>>c;
	ll x=(a+b+c)%9;
	cout<<(a+b+c-x)<<endl;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
	cin>>n;
	while(n--){
		solve();
	}


    return 0;
}
