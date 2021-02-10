#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int nice;
int bi_sup (int *t, int addr, int a, int b)
{
    int mid = (b + a) / 2;
    if (b < a) {
        if (a > nice) {
            return nice;
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
int bi_less (int *t, int addr, int a, int b)
{
    int mid = (b + a) / 2;
    if (b < a) {
        if (b < 0) {
            return 0;
        }
        return b;
    } else if (t[mid] == addr) {
        return (b + a) / 2;
    } else if (t[mid] > addr) {
        return bi_less (t, addr, a, mid - 1);
    } else if (t[mid] < addr) {
        return bi_less (t, addr, mid + 1, b);
    } else
        return -1;
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    int n, k, q, l, r, a, b, t[200005] = {}, v[200005] = {}, m[200005] = {}, p[200005] = {};
    cin >> n >> k >> q;
    int nnn = n;
    while (nnn--) {
        cin >> l >> r;
        t[l]++;
        v[r]++;
    }
    int open = 0;
    int samir = 0; // length of array holding adresses
    for (int i = 1; i <= 200004; i++) {
        open += t[i] - v[i - 1];
        m[i] += open;
        if (m[i] >= k) {
            p[samir++] = i;
        }
    }
    int s = 0;
    nice = samir - 1;
    while (q--) {
        cin >> a >> b;
        int x, y;
        x = a;
        y = b;
        a = bi_sup (p, a, 0, nice);
        b = bi_less (p, b, 0, nice);
        if (x > p[nice]) {
            s = 0;
        } else if (y < p[0]) {
            s = 0;
        } else
            s = b - a + 1;
        cout << s << "\n";
    }

    return 0;
}
