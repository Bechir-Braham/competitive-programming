#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
// #define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)
bool rec(int n,int k,bool p)
{
    if(n==0)return !p;
    if(n==1) return p;
    if(n>1000 and n<k)
    {
        n-=(n/4)*2;
    }
    bool a=false;
    if(max(1,n-k)==1)
        a=true;
    n-=max(1,n-k);
    if(rec(n,k,!p)==p)
        return p;
    if(!a and rec(n+1,k,!p)==p)
        return p;
    return !p;
}
void solve()
{
    int n, k;
    cin >> n>>k;
           
    string a[]={"Kilani","Ayoub"};
    if(rec(n,k,true))
    {
        cout<<a[0]<<endl;
    }
    else cout<<a[1]<<endl;
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
