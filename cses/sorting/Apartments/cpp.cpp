#include <bits/stdc++.h>
#include <vector>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define lp(i, a, b) for (int i = a; i < b; i++)
using namespace std;
const int MAX = 2 * 1e5 + 1;
const ll MAXL = 1e9 + 1;
int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vector<ll> a;
    ll tmp;
    vector<ll> b;
    bool chosen[MAX] = {};
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back (tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        b.push_back (tmp);
    }
    sort (b.begin (), b.end ());
	sort(a.begin(),a.end());
    int found = 0;
	int i,j;
	i=j=0;
	while(i!=n and j!=m) 
	{
		if(b[j]<a[i]-k)j++;
		else if(b[j]>a[i]+k)i++;
		else {
			found++;
			i++;
			j++;
		}


	}

    cout << found;

    return 0;
}
