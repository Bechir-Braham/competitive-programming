#include <bits/stdc++.h>
#include <map>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s[2];
    map<string, int> m;
    lp(n){
        cin>>s[0];
        m[s[0]]++;
    }
    int i=-1;
    for(auto c: m){
        if(c.second>i){
            s[0]=c.first;
            i=c.second;
        }
    }
    cout<<s[0]<<endl;



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
