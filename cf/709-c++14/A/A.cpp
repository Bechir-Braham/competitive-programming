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
    int n,b,d;
    cin >>n>>b>>d;
	int t[INF];
	lp(n){
		cin>>t[i];
	}
	int times=0,sum=0;
	lp(n){
		if(t[i]<=b){
			sum+=t[i];
			if(sum>d){
				sum=0;
				times++;
			}
		}
	}
	cout<<times;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	// freopen("f.in", "r", stdin);
    int times= 1;
    while(times--) {
        solve();
    }

    return 0;
}

