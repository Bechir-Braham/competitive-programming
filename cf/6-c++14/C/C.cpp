#include <algorithm>
#include <bits/stdc++.h>
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
    int n, m;
    cin >> n;
    vector<int> v(n);
    lp(i, n) { cin >> v[i]; }
    int i = -1, j = n;
    ll sum1 = 0, sum2 = 0;
    int rem1 = 0, rem2 = 0;
    while (1) {
        if (rem1 == 0) {
            i++;
            if (i == j) break;
            // cout<<"he "<<v[i]<<endl;
            rem1 = v[i];
            sum1++;
        } else {
            rem1--;
        }
        if (rem2 == 0) {
            j--;
            if (j == i) break;
            // cout<<"she "<<v[j]<<endl;
            rem2 = v[j];
            sum2++;
        } else {
            rem2--;
        }
    }
    cout << sum1 << " " << sum2 << endl;
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
