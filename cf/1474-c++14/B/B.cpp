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
bool check(ll n,ll d){
    for(ll i=2;i<=d;i++){
        if(n%i==0)return true;
    }
    return false;
}
void solve()
{
    string s;
    ll d;
    cin >> d;
    ll n=1+d;
    ll m=1+2*d;
    while(check(n,d)){
        n++;        
    }
    while(m-n<d)m++;
    while(check(m,d)){
        m++;
    }
    cout<<m*n<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
