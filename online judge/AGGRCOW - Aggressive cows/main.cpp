    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;
    typedef long double ld;
    const ll MAXN = (ll)1e6 + 7;
    const ll INF = (int)__builtin_huge_vall(); // return float
    const ll md = 1000000007;
    #define PB      push_back
    #define MP      make_pair
    #define all(x)  (x).begin(), (x).end()
    #define rall(x) (x).rbegin(), (x).rend()
    #define lp(n)   for (int i = 0; i < (n); i++)
    int n, c;
    ll t[MAXN] = {};
    bool valid(ll b)
    {
        int r = c-1;
        ll last = t[0];
        for (ll i = 1; i < n; i++) {
            if (t[i] - last >= b) {
                r--;
                last = t[i];
            }
        }
        if (r <= 0) return true;
        return false;
    }
     
    void solve()
    {
        cin >> n >> c;
        lp(n) cin >> t[i];
        sort(t,t+n);
        ll up=1e9+1,down=0;
        while(up>=down)
        {
            ll mid=(up+down)/2;
            if(valid(mid))
            {
                down=mid+1;
            }
            else{
                up=mid-1;
            }
        }
        cout<<up<<endl;
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

