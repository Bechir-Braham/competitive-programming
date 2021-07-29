#include <bits/stdc++.h>
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
bool bigger(string &s1,string &s2)
{
    if(s1.length()>s2.length())return true;
    if(s1.length()<s2.length())return false;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]<s2[i])
        {
            return false;
        }
    }
    if(s1==s2)return false;
    return true;
}
void solve()
{
    string s;
    cin>>s;
    int c=0;
    string t="1";
    while(bigger(s,t))
    {
        c++;
        t+="00";
    }
    cout<<c;
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
