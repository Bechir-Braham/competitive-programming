#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)

void solve()
{
    int n, m;
    cin >> n;
    vector<int> v((unsigned)n+2);
    ll sum = 0;
    lp(i, n + 2)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(all(v));
    // lp(i,n+2)cout<<v[i]<<" ";
    // cout<<endl;
    m = v[n + 1];
    int m2 = v[n];
    ll tmp = sum - m;
    // cout<<sum<<" ";
    lp(i, n + 1)
    {
        if (tmp - v[i] == m) {
            // b[n+2] _>i;
            int j;
            for (j = 0; j < i; j++) { cout << v[j] << " "; }
            for (j = i + 1; j < n + 1; j++) { cout << v[j] << " "; }
            cout<<endl;
            return;
        }
    }
    tmp=sum-m2;
    ll o=0;
    lp(i, n )
    {
        o+=v[i];

    }
    if(o==m2)
    {
        lp(i,n)
        {
            cout<<v[i]<<" ";
        }
       cout<< endl;
       return;
        
    }
    cout<<-1<<endl;

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
