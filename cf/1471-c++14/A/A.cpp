#include <bits/stdc++.h>
#include <vector>
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
    ll x;
    cin >> n>>x;
    vector<ll>v;
    ll tmp;
    ll sum=0;
    ld a=0;
    lp(n){
        cin>>tmp;
        a+=ceil((ld)tmp/x);
        sum+=tmp;
        v.PB(tmp);
    }
    cout<<(ll)ceil((long double)sum/x)<<" "<<(ll)a<<endl;


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
