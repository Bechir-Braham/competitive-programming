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

void solve(int pp)
{
    int x, y;
    string s;
    cin >> x >> y >> s;
    int i = 0;
    char previ = '0';
    int sum = 0;
    int n = s.length();
    while (i < s.length()) {
        if (s[i] != '?') {
            if (s[i] == 'C' and previ == 'J') {
                sum += y;
            }
            if (s[i] == 'J' and previ == 'C') {
                sum += x;
            }
            previ = s[i];
            i++;
        } else {
            while (s[i] == '?' and i < n) { i++; }
            if (i != n and previ != s[i] and previ != '0') {
                if (previ == 'J') {
                    sum += y;
                }
                if (previ == 'C') {
                    sum += x;
                }
            }
            previ = s[i];
        }
    }
    cout <<"Case #"<<pp<<": "<<sum << endl;
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
    lp(i,times) { solve(i+1); }
    return 0;
}
