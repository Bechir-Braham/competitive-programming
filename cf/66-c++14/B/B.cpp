#include <bits/stdc++.h>
#include <vector>
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
    int n;
    cin >> n;
    vector<int> v;
    int tmp;
    lp (n)
    {
        cin >> tmp;
        v.PB (tmp);
    }
    int maxval = 0;
    int maxid = -1;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        int j = 0;
        cur = 1;
        while (i - j - 1 >= 0 and v[i - j - 1] <= v[i - j]) {
            j++;
            cur++;
        }
        j = 0;
        while (i + j + 1 < n and v[i + j + 1] <= v[i + j]) {
            cur++;
            j++;
        }
        if (maxval < cur) {
            maxval = cur;
            maxid = i;
        }
    }
    cout << maxval;
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
