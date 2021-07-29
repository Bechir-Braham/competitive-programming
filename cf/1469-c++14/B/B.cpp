#include <algorithm>
#include <bits/stdc++.h>
const long long INF= 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int r[INF];
    int b[INF];
    int tmp;
    cin >> r[0];
    for(int i= 1; i < n; i++) {
        cin >> tmp;
        r[i]= tmp + r[i - 1];
    }
    int m;
    cin >> m;
    cin >> b[0];
    for(int i= 1; i < m; i++) {
        cin >> tmp;
        b[i]= tmp + b[i - 1];
    }
	cout<<max(0,b[max_element(b,b+m)-b])+max(0,r[max_element(r,r+n)-r])<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // freopen("f.in", "r", stdin);
    int times= 1;
    cin >> times;
    while(times--) {
        solve();
    }

    return 0;
}
