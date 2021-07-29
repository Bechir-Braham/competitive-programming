#include <bits/stdc++.h>
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
    string s, maxL = "9223372036854775807", maxI = "2147483647", maxS = "32767",maxB="127";
    cin >> s;
	
    if (s.compare (maxL) > 0 and s.size()==maxL.size() or s.size()>maxL.size()) {
        cout << "BigInteger";}
	else if(s.compare(maxI)>0 and s.size()==maxI.size() or s.size()>maxI.size()) cout<<"long";
	else if(s.compare(maxS)>0 and s.size()==maxS.size() or s.size()>maxS.size()) cout<<"int";
	else if(s.compare(maxB)>0 and s.size()==maxB.size() or s.size()>maxB.size()) cout<<"short";
	else cout<<"byte";
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
