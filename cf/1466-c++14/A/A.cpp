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
	lp(n)cin>>t[i];
	set<ld> s;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			s.insert(t[j]-t[i]);
		}
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
