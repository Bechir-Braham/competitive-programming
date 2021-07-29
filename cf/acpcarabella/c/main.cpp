#include <bits/stdc++.h>
#include <cctype>
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
    cin >> n;
    string s;
    bool caps = false;
    char tmp[2100];
    int len = 0;
    string x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s += x + " ";
    }
    cin >> m;
    while (m--) {
        cin >> x;
        if (x == "CapsLock") {
            caps = !caps;
        } else if (x == "Space") {
            tmp[len] = ' ';
            len++;
        } else if (x == "Backspace") {
            if (len != 0) len--;
        } else {
            if (caps) {
                tmp[len] = toupper(x[0]);
                len++;
            } else {
                tmp[len] = x[0];
                len++;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        if (tmp[i] != s[i]) {
            cout << "Incorrect";
            return;
        }
    }
    if (len == s.size() - 1) {
        cout << "Correct";
        return;
    }
    cout << "Incorrect";
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
