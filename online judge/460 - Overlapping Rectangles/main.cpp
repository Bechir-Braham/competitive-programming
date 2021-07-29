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

class p {
  public:
    int x, y;
};
class r {
  public:
    p l, r;
};


void solve()
{
    string s;
    cin >> s;
    r r1, r2;
    cin >> r1.l.x >> r1.l.y >> r1.r.x >> r1.r.y;
    cin >> r2.l.x >> r2.l.y >> r2.r.x >> r2.r.y;
    if (r1.l.x > r2.l.x) swap(r1, r2);
    if(r2.l.x>r1.l.x and r2.l.y>r1.l.y and r2.r.x>r1.r.x  and r2.r.y>r1.r.y)
    {
        cout<<r2.l.x<<' '<<r2.l.y<<' '<<r2.r.x<<' '<<r2.r.y<<endl;
    }
    if(r2.l.x>r1.r.x)
    {
        if(r2.l.y>r1.r.y)
        {
            //
        }
        if()
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
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
