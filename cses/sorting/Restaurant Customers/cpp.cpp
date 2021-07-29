#include <bits/stdc++.h>
#include <utility>
#include <vector>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define lp(i, a, b) for (int i = a; i < b; i++)
using namespace std;
const int MAX = 1e9 + 1;
void printy(vector<pair<int,int>> a){
	for(auto x :a ){
		cout<<x.first<<"  "<<x.second<<endl;
	}

}
int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int n, a, b;
    cin >> n;
    ll omax = -1;
    vector<pair<int, int>> all;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        all.push_back (make_pair (b, a));
    }
	sort(all.begin(),all.end());

    return 0;
}
