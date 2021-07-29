#include <bits/stdc++.h>
#include <utility>
#include <vector>
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
    int n, m, k, q;
    cin >> n >> m >> k >> q;
    vector<pair<int, int>> v;
    int a, b;
    string t[] = {"Carrots", "Kiwis", "Grapes"};
    lp(i, k)
    {
        cin >> a >> b;
        v.emplace_back(a, b);
    }
    int c = 0;
    lp(i, q)
    {
        c = 0;
        bool res = true;
        cin >> a >> b;
        for (auto p : v) {
            if (p.first == a and p.second == b) {
                cout << "Waste\n";
                res = false;
                break;
            }
            if (p.first < a)
                c++;
            else if (p.first == a and p.second < b) {
                c++;
            }
        }
        if (res) {
            cout<<t[((a-1)*(m)+b-c-1)%3]<<'\n';
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
