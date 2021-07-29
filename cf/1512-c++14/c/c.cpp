#include <bits/stdc++.h>
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
    int n, m;
    int a1, a0;
    cin >> a0 >> a1;
    string s;
    cin >> s;
    n = s.size();
    lp(i, n)
    {
        if (s[i] == '?' and s[n - i - 1] != '?') { s[i] = s[n - i - 1]; }
        if (s[i] != '?' and s[n - i - 1] == '?') { s[n - i - 1] = s[i]; }
    }
    // cout << s << endl;
    int n1 = 0, n0 = 0;
    lp(i, n)
    {
        if (s[i] == '1') n1++;
        if (s[i] == '0') n0++;
        if (s[i] != s[n - i - 1]) { cout << -1 << endl; return;}
    }
    if (n1 > a1 or n0 > a0) {
        cout << -1 << endl;
        return;
    }
    a1 -= n1;
    a0 -= n0;
    // 2 0
    lp(i, n / 2)
    {
        if (n % 2 == 1 and i == n / 2) break;
        if (s[i] == '?') {
            if (a1 >= 2) {
                s[i] = s[n - i - 1] = '1';
                a1 -= 2;
            } else if (a0 >= 2) {
                s[i] = s[n - i - 1] = '0';
                a0 -= 2;
            }
        }
    }
    // cout << s << endl;
    if (n % 2 == 1) {
        if (a1 == 0 and a0 == 0) {
            if (s[n / 2] == '?') {
                cout << -1 << endl;
                return;
            } else {
                cout << s << endl;
                return;
            }
        }
        if (s[n / 2] == '?') {
            if (a1 == 0 and a0 == 1) {
                s[n / 2] = '0';
                cout << s << endl;
                return;
            }
            if (a1 == 1 and a0 == 0) {
                s[n / 2] = '1';
                cout << s << endl;
                return;
            }
        } else {
            cout << -1 << endl;
            return;
        }

    } else {
        if (a1 == 0 and a0 == 0) {
            cout << s << endl;
            return;
        } else {
            cout << -1 << endl;
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
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
