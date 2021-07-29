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
int n;
    string s;
    int t[MAXN]={};
    cin >> n;
    cin>>s;
    lp(n)cin>>t[i];
    ll ret=INF;
    bool found=false;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='R' and s[i+1]=='L')
        {
            ret=min(ret,(ll)(t[i+1]-t[i])/2);
            i++;
            found=true;
        }

    }
    if(!found)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<ret;
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
