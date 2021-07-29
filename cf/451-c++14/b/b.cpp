#include <algorithm>
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
    cin >> n;
    vector<int> v((unsigned)n);
    vector<int> b((unsigned)n);
    lp(i, n) cin >> v[i];
    lp(i, n) b[i] = v[i];
    sort(all(b));
    int j;
    int id1, id2;
    for (j = 0; j < n; j++) {
        if (v[j] != b[j]) {
            id1 = j;
            break;
        }
        if (j == n - 1) {
            cout << "yes\n1 1"<< endl;
            return;
        }
    }
    int i;
    id2 = 0;
    for (i = n - 1; i >= 0; i--) {
        if (v[i] != b[i] or i == 0) {
            id2 = i;
            break;
        }
    }
    if (id2 <= id1) {
        cout << "yes\n1 1" << endl;
        return;
    }
    reverse(v.begin() + id1, v.begin() + id2 + 1);
    lp(k, n)
    {
        if (v[k] != b[k]) {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes\n"<<id1+1<<" "<<id2+1 << endl;
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
