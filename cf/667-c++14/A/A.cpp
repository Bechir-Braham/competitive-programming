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
  ld d,h,v,e;
  string s;
  cin >> d>>h>>v>>e;
  ld sur=(d/2)*(d/2)*acos(-1);
  if(e*sur>=v){
      cout<<"NO\n";
      return;
  }
  else{
      cout<<"YES\n";
  }

  cout<<(sur*h)/(v-e*sur)<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cout << fixed<<setprecision(12);
  // freopen("f.in", "r", stdin);
  int times = 1;
  // cin>>times;
  while (times--) { solve(); }
  return 0;
}
