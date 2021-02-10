#include <bits/stdc++.h>
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
    ll n,m,a;
    cin >> n>>m>>a;
    if(a>=n and a>=m){
        cout<<1<<endl;
        return;
    }
    cout<<(ull)ceil((ld)n/a)*ceil((ld)m/a)<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(0);
	// freopen("f.in", "r", stdin);
    int times= 1;
	// cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
