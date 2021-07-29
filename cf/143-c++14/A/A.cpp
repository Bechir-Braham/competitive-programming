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

void solve()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int x = r1 + c1 - d2;
    if (x % 2) {
        cout << -1 << endl;
        return;
    }
    int a, b, c, d;
    a = x / 2;
    b = r1 - a;
    c = c1 - a;
    d = d1 - a;
    if (b == a) {
        cout << -1 << endl;
        return;
    }
    if (c == a or c == b) {
        cout << -1 << endl;
        return;
    }
    if (d == a or d == b or d == c) {
        cout << -1 << endl;
        return;
    }
    if(a<=0 or b<=0 or c<=0 or d<=0)
    {
        cout << -1 << endl;
        return;
    }
    if(a>9 or b>9 or c>9 or d>9)
    {
        cout << -1 << endl;
        return;
    }
    if(a+b==r1 and c+d==r2 and a+c==c1 and b+d==c2 and a+d==d1 and c+b==d2)
    cout<<a<<' '<<b<<'\n'<<c<<' '<<d<<endl;
    else {
        cout<<-1<<endl;
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
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
