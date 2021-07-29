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
    int n, m;
    string s;
    int c = 0;
    cin >> n;
    lp(n)
    {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
            cout << tmp / 2;
        else if (tmp % 2) {
            if (c % 2) {
                cout <<(int) ceil((ld)tmp / 2);
            } else {
                cout <<(int) floor((ld)tmp / 2);
            }
            c++;
        }
        cout << endl;
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
