









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
bool c(ld x, ld y)
{
    if (fabs(x - y) < 0.0001f) { return true; }
    return false;
}
void solve()
{
    ld px, py, ox, oy, ix, iy, ux, uy;
    ld vx, vy, ax, ay;
    while (cin >> px >> py >> ox >> oy >> ix >> iy >> ux >> uy) {
        if (c(px, ix) and c(py, iy)) {
            vx = ox - px;
            vy = oy - py;
            ax = ux - px;
            ay = uy - py;
            cout << px + vx + ax << ' ' << py + vy + ay << endl;

        } else if (c(px, ux) and c(py, uy)) {
            vx = ox - px;
            vy = oy - py;
            ax = ix - px;
            ay = iy - py;
            cout << px + vx + ax << ' ' << py + vy + ay << endl;
        } else if (c(ox, ix) and c(oy, iy)) {
            vx = px - ox;
            vy = py - oy;
            ax = ux - ox;
            ay = uy - oy;
            cout << ox + vx + ax << ' ' << oy + vy + ay << endl;

        } else if (c(ox, ux) and c(oy, uy)) {
            vx = px - ox;
            vy = py - oy;
            ax = ix - ox;
            ay = iy - oy;
            cout << ox + vx + ax << ' ' << oy + vy + ay << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed<<setprecision(3);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
