#include <bits/stdc++.h>
#include <vector>
const long long INF = 1e5 + 7;
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
    vector<ll>v;
    lp(n)
    {
        int tmp;
        cin>>tmp;
        v.PB(tmp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++)
    {
        if(v[i]+v[i+1]>v[i+2])
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";





}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	// freopen("f.in", "r", stdin);
    int times= 1;
	// cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
