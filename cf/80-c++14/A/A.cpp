#include <bits/stdc++.h>
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
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void solve ()
{
    int n, m;
    string s;
    cin >> n >> m;
    for (ll i = n+1; i < m; i++) {
        if (isprime (i)) {
            cout << "NO\n";
            return;
        }
    }
    if(isprime(m)){
        cout<<"YES\n";
    }
    else {
    cout<<"NO\n";
    }
}


int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    cout << fixed << setprecision (0);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }

    return 0;
}
