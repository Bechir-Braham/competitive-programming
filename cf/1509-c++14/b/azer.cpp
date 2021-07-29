#include <iostream>
using namespace std;
#define lp(i, n) for (int i = 0; i < n; i++)
int main()
{
    int q;
    cin >> q;
    while (q--) {
        int n, m=0, t=0;
        string s;
        cin >> n;
        cin >> s;

        lp(i, n)
        {
            if (s[i] == 'T')
                t++;
            else
                m++;
        }
        if (s[0] != 'T' || s[n - 1] != 'T' || t != 2 * m) {
            cout << "NO\n";
            return 0;
        }
        int tneed9 = 0, tneedb = 0;
        m = 0;
        lp(i, n)
        {
            if (s[i] == 'T') {
                if (m == 0)
                    tneed9--;
                else {
                    tneedb--;
                    m--;
                }

            } else {
                m++;
                tneed9++;
                tneedb++;
            }
        }
        if (tneedb == 0 && tneed9 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        return 0;
    }
}
