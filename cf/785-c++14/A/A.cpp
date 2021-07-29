#include <bits/stdc++.h>
#include <map>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string , int> mp;
    mp["Icosahedron"]=20;
    mp["Cube"]=6;
    mp["Tetrahedron"]=4;
    mp["Dodecahedron"]=12;
    mp["Octahedron"]=8;
    ll sum=0;
string s;
    lp(n)
    {
        cin>>s;
        sum+=mp[s];
    }
    cout<<sum;



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
