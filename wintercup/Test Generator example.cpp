#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

string randomString(int n, char l, char r)
{
    int len = r - l + 1;
    string res;
    for (int i = 1; i <= n; ++i) res += char(l + randomInt(0, len - 1));
    return res;
}

int digitsNbr(int x)
{
    if (x == 0) { return 1; }
    int ret{};
    while (x != 0) {
        ret++;
        x /= 10;
    }
    return ret;
}

int main()
{
    // const int tests = 100000;
    cout << 1 << endl;

    int n = 1000;
    cout << n << " " << 1000 << endl;
    for (int i = 0; i < n; i++) { cout << randomInt(0, 1000) << " "; }
    cout << endl;
    for (int i = 0; i < n; i++) { cout << randomInt(0, 1000) << " "; }
}
