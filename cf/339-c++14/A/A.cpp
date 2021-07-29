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
	vector<char>v;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i+=2){
		v.PB(s[i]);
	}
	sort(v.begin(),v.end());
	int i;
	for(i=0;i<v.size()-1;i++){
		cout<<v[i]<<"+";
	}
	cout<<v[i];


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
