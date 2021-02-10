#include <bits/stdc++.h>
using namespace std;
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

void solve()
{
    int n, m;
    string s;
    cin >> n;
    vector<ll> v(n);
    lp(n)cin>>v[i];
    ll sum=0;
    sort(all(v));
    lp(n){
        if(v[i]>sum+1){
            cout<<sum+1;
            return;
        }
        sum+=v[i];
        
    }
    cout<<sum+1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
