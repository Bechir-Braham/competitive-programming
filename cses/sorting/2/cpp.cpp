#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define lp(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int m, n;
    ll k;
    vector<ll> a, b;
    cin >> n >> m>> k;
    ll tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back (tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        b.push_back (tmp);
    }
    sort (b.begin (), b.end ());
    int count = 0;
    for (int i=0;i<a.size();i++) {
		cout<<"+"<<a[i]<<endl;
        auto idx = lower_bound (b.begin (), b.end (), a[i]);
        if (b[idx - b.begin ()] >= a[i] - k and b[idx - b.begin ()] <= a[i] + k) {
            count++;
            continue;
        }

			cout<<"lwo"<<a[i]<<" "<<b[idx - b.begin ()] <<endl;
        idx = upper_bound (b.begin (), b.end (), a[i]);
		if(idx-b.begin()==b.size())continue;
        if (b[idx - b.begin ()] >= a[i] - k and b[idx - b.begin ()] <= a[i] + k) {
            count++;
        }
			cout<<"ip"<<a[i]<<" "<<b[idx - b.begin ()]<<endl ;
    }

    cout << endl<<count;

    return 0;
}
