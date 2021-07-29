#include <algorithm>
#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
int bi_less (ll *t, ll val, int a, int b)
{
	int mid = (b + a) / 2;
	if (b < a) {
		if (b < 0) {
			return 0;
		}
		return b;
	}
	if (val == t[mid]) return mid;
	if (val < t[mid]) return bi_less (t, val, a, mid - 1);
	if (val > t[mid]) return bi_less (t, val, mid + 1, b);
	return -1;
}

#define lp(i, a, b) for (int i = a; i < b; i++)
using namespace std;
const int MAX = 1e6;
int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int n;
    ll x;
    cin >> n >> x;
	if(n==1){
		cout<<1;
		return 0;
	}
    ll p[n];
    bool chosen[MAX] = {};
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort (p, p + n);
    int work = 0;
    for (int i = 0; i < n; i++) {
		if(chosen[i])continue;
		chosen[i]=true;
        int idx=bi_less(p, x-p[i], i+1, n-1);
		if(!chosen[idx]){
			p[idx]=x+1;
			chosen[idx]=true;
		}
		work++;
		p[i]=x+1;
	}
	cout<<work;
    return 0;
}
