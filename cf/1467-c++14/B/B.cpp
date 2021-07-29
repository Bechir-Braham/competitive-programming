#include <bits/stdc++.h>
#include <vector>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin (), (x).end ()
#define rall(x) (x).rbegin (), (x).rend ()
#define lp(n) for (int i = 0; i < (n); i++)
ll v[INF];
ll n, m;
bool check (int i)
{
    if (i - 1 < 0 or i + 1 >= n) {
        return false;
    }

    return ((v[i] > v[i - 1] and v[i] > v[i + 1]) or (v[i] < v[i - 1] and v[i] < v[i + 1]));
}
using namespace std;
void solve ()
{
    string s;
    cin >> n;
    lp (n)
    {
        cin >> m;
        v[i] = (m);
    }
    bool twice = false;
    bool triple = false;
    bool once = false;
    int count = 0;
    for (ll i = 1; i < n - 1; i++) {
        if (check (i)) {
            count++;
            once = true;
            if (check (i - 1)) {
                ll tmp=v[i-1];
                v[i-1]=v[i];
                if(!check(i-2)){
                    twice=true;
                }
                v[i-1]=tmp;
                tmp=v[i];
                v[i]=v[i-1];
                if(!check(i+1)){
                    twice=true;
                }
                v[i]=tmp;
                if (check (i - 2)) {
                    triple = true;
                }
            }
        }
    }
    if (triple) {
        cout << count - 3;
    } else if (twice) {
        cout << count - 2;
    } else if (once) {
        cout << count - 1;
    } else {
        cout << count;
    }
    cout << endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
    }
    return 0;
}
