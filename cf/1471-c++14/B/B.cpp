#include <bits/stdc++.h>
#include <vector>
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
    ll n, x, tmp, sum = 0;
    cin >> n >> x;
    vector<ll> v;
    vector<ll> p;
    lp (n)
    {
        cin >> tmp;
        v.PB (tmp);
    }
    tmp = x;
    ll count = 0;
    ll t[INF] = {};
    bool found = false;
    while (found == false) {
        for (ll i = 0; i < n; i++) {
            if (v[i] % tmp==0) {
                t[i]++;
            } else {
                found = true;
                break;
            }
        }
        tmp *= x;
        count++;
    }
    sum=0;
    lp(n){
        sum+=(t[i]+1)*v[i];
    }
    cout << sum<<endl;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
    }

    return 0;
}
