#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
// #define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nm, nt;
    nm = count(all(s), 'M');
    nt = count(all(s), 'T');
    if (nm * 2 != nt) {
        cout << "NO\n";
        return;
    }
    map<int, int> m;
    vector<int> v;
    vector<int> b;
    int c = 0;
    int oc = 0;
    lp(i, n)
    {
        if (s[i] == 'M') {
            if (c == 0) {
                cout << "NO\n";
                return;
            }
            m[i] = oc;
            v.PB(c);
        } else {
            c++;
        }
    }
    v.PB(c);
    c = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'M') {
            if (c == 0) {
                cout << "NO\n";
                return;
            }
            b.PB(c);
        } else {
            c++;
        }
    }
    b.PB(c);
    reverse(all(b));
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:b)cout<<x<<" ";
    // cout<<endl;
    c = 0;
    oc = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] < i + 1) {
            cout << "NO\n";
            return;
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[b.size()-i-1]<i+1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

    //TMTTTT 
    //15
    //51

    //TMTMTTTMTTMT
    //12578
    //87631
    //
    //TTTMM TMT  MTTT
    // 22347
    // 75543
    // 120 314 256
    // 652 413 021
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
