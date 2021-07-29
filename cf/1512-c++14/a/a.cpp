#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)

void solve()
{
    int n, m;
    cin >> n;
    vector<int> v((unsigned)n);
    lp(i,n)
    {
        cin>>v[i];
    }
    vector<int>b;
    b.PB(v[0]);
    b.PB(v[1]);
    b.PB(v[2]);
    sort(all(b));
    int val;
    // cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
    if(b[0]==b[1])
    {
        val=b[0];

    }
    if(b[1]==b[2])
    {
        val=b[1];
    }
    lp(i,n)
    {
        if(v[i]!=val)
        {
            cout<<i+1<<endl;
            return ;
        }
    }

           
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
