#include <algorithm>
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
int k;
int c=0;
void solve()
{
    int t[10]={};
    int x;
    cin>>x;
    while(x>0)
    {
        t[x%10]++;
        x/=10;
    }
    for(int i=0;i<=k;i++)
    {
        if(t[i]==0)
        {
            return;
        }
    }
    
    c++;
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
    cin>>k;
    while (times--) { solve(); }
    cout<<c<<endl;
    return 0;
}
