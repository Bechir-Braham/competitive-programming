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
    ll q, t[2] = {}, n, x, tmp;
    cin >> q;
    while (q--) {
        cin >> n >> x;
        t[1] = t[0] = 0;
        loop (i, 0, n)
        {
            cin >> tmp;
            t[tmp % 2]++;
        }
        if (t[1] == 0 || (t[0]==0 and x%2==0)) {
            cout << "NO\n";
        } else {
            if (t[0] >= x - 1)
                cout << "YES\n";
            else {
                if ((x - t[0]) % 2 == 0) {

                    if (t[1] > x-t[0])
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                } else {
                    cout << "YES\n";
                }
            }
        }
    }
    return 0;
}
