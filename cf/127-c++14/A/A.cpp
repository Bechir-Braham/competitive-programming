#include <bits/stdc++.h>
#include <math.h>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin (), (x).end ()
#define rall(x) (x).rbegin (), (x).rend ()
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    int n, m;
    int k;
    string s;
    cin >> n >> k;
    ld dist=0;
    ld speed = 50;
    ld lastx,lasty,x,y;
    cin>>lastx>>lasty;
    lp (n-1) {
        cin>>x>>y;
        dist+=sqrt((x-lastx)*(x-lastx)+(y-lasty)*(y-lasty));
        lasty=y;
        lastx=x;
    }
    cout<<k*(dist/speed)<<endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    cout << fixed << setprecision (9);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }

    return 0;
}
