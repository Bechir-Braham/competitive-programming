#include <bits/stdc++.h>
using namespace std;
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

void solve()
{
    int n, m;
    cin >> n;
    set<int> s;
    int cur=2;
    while(s.size()!=n){
        s.insert(cur);
        cout<<cur<<" ";
        cur=(cur+1)%n+1;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
