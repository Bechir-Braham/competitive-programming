#include <bits/stdc++.h>
#include <sys/types.h>
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

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(i==0 and s[0]=='9')
        {
            continue;
        }
        if (s[i] - '0' > 4) { s[i] = (9 - (s[i] - '0')) + '0'; }
    }
    cout<<s;
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
