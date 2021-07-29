#include <bits/stdc++.h>
#include <map>
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
#define lp(n)   for (ll i = 0; i < (n); i++)

int v[100000+30];
int t[MAXN];
void solve()
{
    int n,x;
    cin>>n>>x;
        set<int> s;

    lp(n)
    {
        cin>>v[i];
        if(s.find(v[i])==s.end())
        {
            t[v[i]]=0;
        }
        s.insert(v[i]);
        t[v[i]]++;
    }
    ll sum=0;
    for(auto r:s)
    {
        if(t[r]<=x)
        {
            sum+=t[r];
        }
    }
    cout<<sum<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;

    // freopen("f.in", "r", stdin);
    ll times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
