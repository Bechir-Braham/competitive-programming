#include <bits/stdc++.h>
#include <vector>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll>v;
    ll tmp;
    lp(n){
        cin>>tmp;
        v.PB(tmp);
    }
    ll sco=0;
    ll cur=0;
    lp(n){
        cur=0;
        int id=i;
        while(cur<=n){
            cur+=v[id];
            id+=v[id];
            if(id>=n)break;
        }
        sco=max(sco,cur);

    }
    cout<<sco<<'\n';


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
