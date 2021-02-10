#include <bits/stdc++.h>
#include <stdexcept>
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
	string s;
	cin>>s;
	if(s.length()<11){
		cout<<s<<endl;
		return;
	}
	cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;


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
