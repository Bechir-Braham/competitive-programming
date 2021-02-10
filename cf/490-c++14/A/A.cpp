#include <bits/stdc++.h>
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
	int n;
	cin>>n;
	int tmp;
	vector<ll> pe,ma,cs;
	lp(n){
		cin>>tmp;
		if(tmp==1)
			cs.PB(i);
		if(tmp==2)
			ma.PB(i);
		if(tmp==3)
			pe.PB(i);
	}
	int p1,p2,p3;
	int i=0;
	int w=min(pe.size(),min(cs.size(),ma.size()));
	cout<<w<<endl;
	while(w--){
		cout<<cs[i]+1<<" "<<ma[i]+1<<" "<<pe[i]+1<<endl;
		i++;
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

