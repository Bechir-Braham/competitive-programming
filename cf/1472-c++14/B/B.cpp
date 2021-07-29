#include <bits/stdc++.h>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    lp (n)
    {
        ll tmp;
        cin >> tmp;
        v.PB (tmp);
        sum += tmp;
    }
    sort (v.rbegin (), v.rend ());
    ll x = 0;
    int i = 0;
    if(sum%2){
        cout<<"NO\n";
        return;
    }
    for (auto c : v) {
        if (x + c <= sum/2) {
            x += c;
        }
    }
    if(x==sum/2)cout<<"YES\n";
    else cout<<"NO\n";
    v.clear();


    // lp(n){
    // ll tmp;
    // cin>>tmp;
    // if(tmp==1)n1++;
    // if(tmp==2)n2++;
    // if(n1==2){
    // n1=0;
    // n2++;
    // }
    // }
    // if(n1%2==1)cout<<"NO\n";
    // else if(n2)
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
    }

    return 0;
}
