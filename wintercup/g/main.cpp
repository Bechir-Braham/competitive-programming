#include <bits/stdc++.h>
#include <iterator>
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
    int type;
    bool rev = false;
    int n;
    char c;
    cin >> n;
    lp(n)
    {
        cin >> type;
        if (type == 1) {
            rev = !rev;
        } else {
            cin >> c;
            if (type == 2) {
                if (rev == false) {
                    s = c + s;
                } else {
                    s = s + c;
                }
            } else {
                if (rev == false) {
                    s = s + c;
                } else {
                    s = c + s;
                }
            }
        }
    }
    if (rev == true) {
        reverse(all(s));
        cout << s;
    } else {
        cout << s;
    }
    cout << '\n';
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
