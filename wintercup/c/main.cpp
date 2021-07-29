#include <bits/stdc++.h>
#include <vector>
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

    int t[200000+30];
void solve()
{
    int n,x;
    cin>>n>>x;
    lp(n)
    {
        cin>>t[i];
    }
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=min(x,t[i+1]-t[i]);

    }
    sum+=x;
    cout<<sum<<endl;

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
