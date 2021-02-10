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
	map<char,int> m;
	m['B']=m['A']=m['C']=0;
	string in;
	lp(3){
		cin>>in;
		if(in[1]=='>'){
			m[in[0]]++;
		}
		else{
			m[in[2]]++;

		}
	}
	vector<pair<int,char>>v;
	set<ll> s;
	s={m['A'],m['C'],m['B']};
	if(s.size()<2){
		cout<<"Impossible";
			return;
	}
	v.PB(MP(m['B'],'B'));
	v.PB(MP(m['A'],'A'));
	v.PB(MP(m['C'],'C'));
	sort(v.begin(),v.end());
	for(auto c: v){
		cout<<c.second;
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
