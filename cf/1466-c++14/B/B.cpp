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
    int n;
    cin >> n;
	int t[INF];
	int last=t[0];
	int count=0;
	lp(n)cin>>t[i];
	set<ll> s;
	s.insert(t[0]);
	for(int i=1;i<n;i++){
		if(t[i]==t[i-1] or t[i]<t[i-1])
		{
			t[i]++;
		}
		s.insert(t[i]);
	}
	cout<<s.size()<<"\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	// freopen("f.in", "r", stdin);
    int times= 1;
	cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
