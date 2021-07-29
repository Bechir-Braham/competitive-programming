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
    ll t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        ll s = (a % 10 == b % 10) ? abs (a - b) / 10 : abs (a - b) / 10 + 1;
        cout << s << "\n";
    }


    return 0;
}
