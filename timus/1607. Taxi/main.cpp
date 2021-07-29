#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define endl    '\n'
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)

void solve()
{
    vector<int> v;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= c) {
        cout << a << endl;
        return;
    }
    while (1) {
        a+=b;
        // cout<<a<<" "<<c<<"ask taxi"<<endl;
        if (a >= c) {
            cout << c << endl;
            return;
        }
        c-=d;
        // cout<<a<<" "<<c<<"ask client"<<endl;
        if (a >= c) {
            cout << a << endl;
            return;
        }
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
