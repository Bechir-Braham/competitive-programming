#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
using namespace std;
ll s = 0;
    ll n, k;
ll sum(ll c)
{
    ll b=k-c;
    if(b==k)return 1;
    
    return ((k*(k-1))-b*(b-1))/2+1;
}
void solve()
{
    cin >> n >> k;
    s=sum(k-1);
    // cout<<s<<endl;
    if (s < n) {
        cout << -1 << endl;
        return;
    }
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    if(n<=k)
    {
        cout<<1<<endl;
        return;
    }
    ll up=k;
    ll down=1;
    while(up>=down)
    {
        ll mid=(up+down)/2;
        if(sum(mid)>=n)
        {
            up=mid-1;
        }
        else{
            down=mid+1;
        }
    }
    cout<<down;
    //TLE
    // int c=0;
    // k--;
    // n--;
    // while(n>0)
    // {
        // n-=k;
        // k--;
        // c++;

    // }
    // cout<<c;
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
