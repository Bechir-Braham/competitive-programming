#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int n;
int bi_less (int *t, int val, int a, int b)
{
    int mid = (b + a) / 2;
    if (b < a) {
        if (b < 0) {
            return 0;
        }
        return b;
    }
    if (val == t[mid]) return mid;
    if (val < t[mid]) return bi_less (t, val, a, mid - 1);
    if (val > t[mid]) return bi_less (t, val, mid + 1, b);
    return -1;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int a, b, c, tmp, t[100001] = {}, q, tim;
    cin >> n >> tim;
    cin >> tmp;
    t[1] = tmp;
    for (int i = 2; i < n + 1; i++) {
        cin >> tmp;
        t[i] = t[i - 1] + tmp;
    }
    c = 0;
    int MAX = 0;
    for (a = 0; a < n + 1; a++) {
        b = bi_less (t, tim + t[a], 0, n);
        MAX = max (b - a, MAX);
    }

    cout << MAX << endl;


    return 0;
}
