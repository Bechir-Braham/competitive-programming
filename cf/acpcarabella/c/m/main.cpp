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
    string s;
    cin>>s;
    int mp[200]={};
    for(char x:s)
    {
        mp[x]++;
    }
    string o="";
    for(char a='a';a<'z';a++)
    {
        mp[a+1]+=mp[a]/2;
        mp[a]=mp[a]%2;
    }
    for(char a='z';a>='a';a--)
    {
        while(mp[a]>0)
        {
            o+=a;
            mp[a]--;
        }
    }
    cout<<o;

           
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
