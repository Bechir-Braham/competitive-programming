#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
const float eps = 0.001f;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
class p {
  public:
    ld x, y;
};
class r {
  public:
    p l, r;
};

vector<r> v;
void check(p o,int pp) {
    bool found=false;
    for(int i=0;i<v.size();i++){
        p l=v[i].l;
        p r=v[i].r;
        if(o.x>l.x and o.y<l.y and o.x<r.x and o.y>r.y)
        {
            found=true;
            cout<<"Point "<<pp<<" is contained in figure "<<i+1<<endl;

        }

    }
    if(!found)
   cout<<"Point "<<pp<<" is not contained in any figure"<<endl;
}
void solve()
{
    char x;
    cin >> x;
    while (x != '*') {
        r tmp;
        cin >> tmp.l.x >> tmp.l.y >> tmp.r.x >> tmp.r.y;
        v.PB(tmp);
        cin >> x;
    }
    p tmp;
    cin >> tmp.x >> tmp.y;
    int c=1;
    while (fabs(tmp.x - 9999.9) > eps * 10 and
           fabs(tmp.y - 9999.9) > eps * 10) {
        check(tmp,c++);
        cin >> tmp.x >> tmp.y;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
