#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    vector<ll> p;
    int n, i = 0, j;
    ll x, tmp;
    cin >> n>>x;
    lp (n)
    {
        cin >> tmp;
        p.PB (tmp);
    }
    j = n - 1;
    sort (p.begin (), p.end ());
    int use = 0;
    while (i <= j) {
		if(p[i]+p[j]>x){
			j--;
			use++;
		}
		else{
			use++;
			j--;
			i++;
		}
    }
    cout << use;
    return 0;
}
