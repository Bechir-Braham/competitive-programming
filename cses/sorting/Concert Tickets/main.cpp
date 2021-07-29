#include <functional>
#include <iostream>
#include <set>
typedef long long ll;
using namespace std;

int main()
{
    std::multiset<ll, greater<ll>> mymultiset;
    std::multiset<ll>::iterator itlow, itup;
    int n, m;
    cin >> n >> m;
	ll x;
    for(int i= 0; i < n; i++) {
		cin>>x;
		mymultiset.insert(x);
    }
	while(m--){
		cin>>x;
		itlow=mymultiset.lower_bound(x);
		if(itlow==mymultiset.end()) cout<<"-1\n";
		else {
		cout<<*itlow<<"\n";
		mymultiset.erase(itlow);
		}
	}



    return 0;
}

