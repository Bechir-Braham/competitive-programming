#include <bits/stdc++.h>
const long long INF= 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md= 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    ll n,m;
    string s;
    cin >> n>>m;
    for(ll a=n;a<=m;a++){
        for(ll b=a+1;b<m+1;b++){
            for(ll c=n;c<m+1;c++){
                if(c!=a and c!=b){
                    if(__gcd(a,b)==1 and __gcd(b,c)==1 and __gcd(a,c)!=1){
                        cout<<a<<" "<<b<<" "<<c<<endl;
                        return;
                    }
                }

            }

        }
    }
cout<<-1<<endl;

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
