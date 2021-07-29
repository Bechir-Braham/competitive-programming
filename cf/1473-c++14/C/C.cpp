#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define VV(x)   vector<x>
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < ((ll)n); i++)
inline void print(vector<ll> &v)
{
    lp(v.size()) cout << v[i] << " \n"[i == (int)v.size()-1];
}
void solve()
{
    int n, k;
    string s;
    cin>>n>>k;
    vector<ll> v;
    lp(k) v.PB(i + 1);
    vector<ll> a = v;
    reverse(all(a));

    for(ll i=k-(n-k)-1;i<v.size();i++){
        v[i]=a[i-k+1+(n-k)];
    }
    print(v);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin>>times;
    while (times--) { solve(); }
    return 0;
}
