#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
using namespace std;
void solve()
{
  ll n, m;
  cin >> n>>m;
  vector<ld> v(n);for(auto &a: v)cin>>a;
  sort(all(v));
  ld ret=v[0];
  for(ll i=1;i<n;i++){
      ret=max(ret,(v[i]-v[i-1])/2);
  }
  ret=max(ret,m-v[n-1]);
  cout<<ret<<endl;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cout << fixed<<setprecision(10);
  // freopen("f.in", "r", stdin);
  int times = 1;
  // cin>>times;
  while (times--) { solve(); }
  return 0;
}
