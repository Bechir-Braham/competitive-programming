#include <bits/stdc++.h>
const long long INF = 1e5 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    stack<ll> s;
    int n;
    cin >> n;
    int tmp;
    int last = -1;
    lp (n)
    {
        cin >> tmp;
        if (tmp > last) {
            s.push (tmp);
        } else {
            while (!s.empty ()) {
                cout << s.top () << " ";
                s.pop ();
            }
			s.push(tmp);
        }
		if(last!=-1)
            cout << "\n";
        last = tmp;
    }
    while (!s.empty ()) {
        cout << s.top () << " ";
        s.pop ();
    }
	cout<<"\n";
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) {
        solve ();
    }

    return 0;
}
