#include <bits/stdc++.h>
#define PI 3.14159265359
#define lp(i, n) for(int i = 0; i < n; i++)
typedef long long ll;
typedef long double ld;

using namespace std;

bool maxProducts(ll *k, ll n, ll time, ll t){
	ll ret = 0;
	for(ll i = 0; i < n; i++){
		ret += time / k[i];
		if(ret >= t)
			return false;
	}
	return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n, t;
	cin >> n >> t;
	ll k[n];
	ll m = numeric_limits<ll>::max();
	lp(i, n){
		cin >> k[i];
		m = min(m, k[i]);
	}
	ll step = (m * t) / 2;
	ll ret = 0;
	while(step > 0){
		if(maxProducts(k, n, ret + step, t))
			ret += step;
		else
			step /= 2;
	}
	cout << ret + 1 << endl;
    return 0;
}
