#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long double ld;
const ull MAXN = (ull)1e6 + 7;
const ull md = 1000000007;
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define aull(x)  (x).begin(), (x).end()
#define raull(x) (x).rbegin(), (x).rend()
#define lp(i, n) for (ull i = 0; i < (n); i++)
ull arr[100][100];
ull cnk(ull n, ull k)
{
    if (k == 0) return 1;
    if (n == 0) return 1;
    return (n * cnk(n - 1, k - 1)) / k;
}


   ull  C[100][100];
void binomialCoeff(ull n, ull k)
{
    ull i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
   return;
}


ull powe(ull n) { return 1ull << n; }
ull res(ull n)
{
    ull sum = 0;
    ull k = 0;
    while (k <= n / 2) {
        sum += C[n - k + 1][k];
        k++;
    }
    (n % 2) ? sum++ : sum;
    return powe(n) - sum;
}
ull ans(ull n)
{

    bitset<65> y(n);
    ull sum = 0;
    for (ull i = 63; i >= 1; i--) {
        if (y[i] == 1) {
            sum += res(i);
            if (y[i + 1] == 1) {
                ull x = n & (powe(i) - 1);
                sum += x + 1;
                return sum;
            }
        }
    }
    return sum;
}
void solve()
{
    ull n = 63, k = 0;
    ull c = 0;
    ull l, r;
    cin >> l >> r;
    cout << ans(r) - ans(l - 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    binomialCoeff(65, 65);
    // freopen("f.in", "r", stdin);
    ull times = 1;
    cin >> times;
    while (times--) { solve(); }
    return 0;
}
