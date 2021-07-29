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

void solve()
{
    int n,tmp;
    cin>>n;
    tmp=n;
    int a1,a2,a3,a4;
    string s="";
    int t[5]={};
    int i=0;
    while(tmp>0)
    {
        t[i++]=tmp%2;
        tmp/=2;
    }
    if(t[0])
    {
        s="wink "+s;
    }
    if(t[1])
    {
        s="close_your_eyes "+s;
    }
    if(t[2])
    {
        s="double_blink "+s;
    }
    if(t[3])
    {
        s="jump "+s;
    }
    cout<<s<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin>>times;
    while (times--) { solve(); }
    return 0;
}
