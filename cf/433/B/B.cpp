#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    ll n, m, t[100002] = {}, s[100002] = {}, v[100002] = {}, tmp, l, r, q;
    cin >> n;
    loop (i, 1, n + 1)
    {
        cin >> t[i];
        s[i] = s[i - 1] + t[i];
    }
    sort (t, t + n+1);
    loop (i, 1, n + 1)
    {
        v[i] = v[i - 1] + t[i];
    }
	cin>>m;
	while(m--){
		cin>>tmp>>l>>r;
		
		if(tmp==1){
				cout<<s[r]-s[l-1]<<"\n";
		}
		else{
				cout<<v[r]-v[l-1]<<"\n";

		}
	}

    return 0;
}
