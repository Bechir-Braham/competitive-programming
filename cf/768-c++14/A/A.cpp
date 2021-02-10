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
    int t[INF];
    lp (n) cin >> t[i];
    sort (t, t + n);
    int count = 2;
    int i = 0;
    while (i+1<n and t[i] == t[i + 1]) {
        count++;
        i++;
    }
	i=n-1;
	while(i-1>=0 and t[i]==t[i-1]){
		count++;
		i--;
	}
	cout<<max(n-count,0)<<endl;
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
