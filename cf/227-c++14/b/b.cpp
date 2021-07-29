#include <bits/stdc++.h>
#include <map>
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
     m=n;
    vector<int> v;
    map<int, int> a;
    map<int, int> b;
        int tmp;

    while(m--)
    {
        cin>>tmp;
        v.PB(tmp);
    }
    for(int i=0;i<n;i++)
    {
            a[v[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
            b[v[i]]=n-i;
    }



    int q;
    cin>>q;
    ll r1,r2;
    r1=r2=0;
    while(q--)
    {
        cin>>tmp;
        r1+=a[tmp];
        r2+=b[tmp];
    }
    cout<<r1<<' '<<r2<<endl;



           
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

