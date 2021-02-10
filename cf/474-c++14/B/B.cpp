#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int bi_sup (int *t, int addr, int a, int b)
{
    int mid = (b + a) / 2;
    if (b < a) {
        if (a < 0) {
            return 0;
        }
        return a;
    } else if (t[mid] == addr) {
        return (b + a) / 2;
    } else if (t[mid] > addr) {
        return bi_sup (t, addr, a, mid - 1);
    } else if (t[mid] < addr) {
        return bi_sup (t, addr, mid + 1, b);
    } else
        return -1;
}


int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int n, q, label, si, tmp, t[100001] = {};
    cin >> n;
    tmp = 0;
    int last = 1;
    cin >> tmp;
    t[0] = tmp;
    for (int i = 1; i < n; i++) {
        cin >> tmp;
        t[i] = t[i - 1] + tmp;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        cout << bi_sup (t, tmp, 0, n - 1) + 1 << endl;
    }
    return 0;
}
