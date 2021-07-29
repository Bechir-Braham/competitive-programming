#include <bits/stdc++.h>
#include <unordered_set>
const long long INF = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define MK make_pair
#define lp(n) for (int i = 0; i < n; i++)
using namespace std;

void solve ()
{


    multiset<int> m;
    map<int, int> mp;
	int sum=0;
    lp (5)
    {
        int x;
        cin >> x;
		sum+=x;
        mp[x]++;
        m.insert (x);
    }
	multiset<int>l;
	l.insert(sum);
    for (auto i=m.begin(); i != m.end (); i++) {
		if(mp[*i]>1){
			l.insert(sum-min(3,mp[*i])* (*i));
		}
    }
	cout<<*l.begin();
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int times = 1;
    while (times--) {
        solve ();
    }

    return 0;
}
