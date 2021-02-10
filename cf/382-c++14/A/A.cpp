#include<bits/stdc++.h>
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

void solve()
{
    string s,p;
    cin>>s;
    int i=0;
    string l,r;
    while(s[i]!='|')
    {
        l+=s[i];
        i++;
    }
    i++;
    while(i<s.length())
    {
        r+=s[i];
        i++;
    }

    cin>>p;
    for(char x:p)
    {
        if(r.length()<=l.length())
        {
            r+=x;
        }
        else {
            l+=x;
        }
    }
    if(l.length()!=r.length())
    {
        cout<<"Impossible";
        return;
    }
    cout<<l<<"|"<<r;

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
