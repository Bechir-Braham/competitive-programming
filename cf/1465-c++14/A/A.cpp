#include <bits/stdc++.h>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for(int i= 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
	string s;
	cin>>s;
	auto it=s.end();
	it--;
	int count=0;
	while(*it==')'){
		it--;
		count++;
	}
	if(count>s.size()-count){
		cout<<"YES\n";
return ;
	}
	cout<<"NO\n";



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int times= 1;
	cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
