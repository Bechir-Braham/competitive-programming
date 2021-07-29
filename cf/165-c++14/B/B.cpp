#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
ll t[MAXN]={};
int n,k;
bool valid(ll v)
{
    ll sum=0;
    ll p=1;
    while(v/p>0)
    {
        sum+=v/p;
        p*=k;

    }
    if(sum>=n)
    {
        return true;
    }
    else return false;
}
void solve()
{
    cin>>n>>k;
    ll  up=INF,down=1;
    while(up>=down)
    {
        ll mid=(up+down)/2;
        if(valid(mid))
        {
            up=mid-1;
        }
        else {
            down=mid+1;
        }
    }
    cout<<down;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}

