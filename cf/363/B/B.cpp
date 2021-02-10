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
    const int size = 2 * 1e5;
    ll n, k, sum = 0, t[size] = {}, tmp;
    cin >> n >> k;
    loop (i, 0, n) { cin >> t[i]; }

    int index = 0, minim;
    sum = t[0]+t[1]+t[2];
    minim = sum;
    for (int i = 1; i <= n - k; i++) {
        sum += t[i + k - 1] - t[i - 1];
        if (sum < minim) {
            minim = sum;
            index = i;
        }
    }
    cout << index + 1 ;

    return 0;
}
