#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
// #define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)

void solve(int tt)
{
    cout << "Case #" << tt << ": ";
    int n, m, c;
    cin >> n >> c;
    /*
     * for(n=2;n<100;n++)
     * {
     *     for(c=1;c<1001;c++)
     *     {
     */

    vector<int> v((unsigned)n);
    int step = -1;
    int tmp = n - 1;
    int x = n - 1;
    int moo = (n + 2) * (n - 1) / 2;
    if (c < n - 1 or c > moo) {
        cout << "IMPOSSIBLE" << endl;
        return;
        // continue;
    }
    if (c == moo) {
        step = n;
    } else {
        while (x <= c) {
            x += tmp;
            tmp--;
            step++;
        }
    }
    tmp++;
    int noum = c - x + tmp;
    // cout << noum << endl;
    // cout<<step<<endl;
    int l = 0, r = n - 1;
    for (ll i = 1; i <= step; i++) {
        if (i % 2 == 0) {
            v[l++] = i;
        } else {
            v[r--] = i;
        }
    }
    if (step % 2 == 0) {
        for (int i = l; i <= r; i++) { v[i] = ++step; }
        // lp(i, n) { cout << v[i] << " "; }
        // cout << endl;
        // cout<<r-noum<<" "<<r+1<<endl;
        if (c != moo) reverse(v.begin() + r - noum, v.begin() + r + 1);

    } else {
        for (int i = r; i >= l; i--) { v[i] = ++step; }
        // lp(i, n) { cout << v[i] << " "; }
        // cout << endl;
        if (c != moo) reverse(v.begin() + l, v.begin() + l + noum + 1);
    }
    lp(i, n) { cout << v[i] << " "; }
    cout << endl;
    // }
    // }
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
    for (int i = 1; i <= times; i++) { solve(i); }
    return 0;
}
