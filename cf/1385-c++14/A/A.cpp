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
void out(int x, int y, int z) { cout << x << " " << y << " " << z << endl; }
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    // for (int i = 20; i < 25; i++) {
    // for (int j = 20; j < 25; j++) {
    // for (int k = 20; k < 25; k++) {
    // cout<<"#"<<endl;
    // cout << i << " " << j << " " << k << endl;
    // cout<<max(i,j)<<" "<<max(i,k)<<" "<<max(j,k)<<endl;
    // }
    // }
    // }
    if (x == z and y == z) {
        cout << "YES\n";
        out(x, x, x);
        return;
    }
    if (x != y and x != z and z != y) {
        cout << "NO" << endl;
        ;
        return;
    }
    vector<int> v;
    v.PB(x);
    v.PB(y);
    v.PB(z);
    sort(all(v));
    if (v[0]==v[1]) {
        cout<<"NO\n";
        return;
    }
    else{
        cout<<"YES\n";
        out(v[0],v[0],v[1]);
    }

}
/*
  5
  3 2 3
  100 100 100
  50 49 49
  10 30 20
  1 1000000000 1000000000
  5
  3 2 3
  100 100 100
  50 49 49
  10 30 20
  1 1000000000 1000000000
 */

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
