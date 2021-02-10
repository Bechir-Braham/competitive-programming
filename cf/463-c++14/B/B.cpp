#include <bits/stdc++.h>
const long long INF = 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    int t[INF] = {};
    int curen = 0;
	t[0]=0;
	lp(n){
		cin>>t[i+1];
	}
	int ret=0;
    lp (n) {
		if(curen+t[i]<t[i+1]){
			ret+=t[i+1]-t[i]-curen;
			curen=0;
		}
		else
		curen+=t[i]-t[i+1];
    }
	cout<<ret<<endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }

    return 0;
}
