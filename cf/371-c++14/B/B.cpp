#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)

void solve()
{
    int a, b;
    cin >> a >> b;
    int n3[2] = {}, n2[2] = {}, n5[2] = {};
    int tmp;
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    tmp = a;
    while (tmp % 5 == 0) {
        tmp /= 5;
        n5[0]++;
    }
    while (tmp % 3 == 0) {
        tmp /= 3;
        n3[0]++;
    }
    while (tmp % 2 == 0) {
        tmp /= 2;
        n2[0]++;
    }
        int tmp2 = b;
    while (tmp2 % 5 == 0) {
        tmp2 /= 5;
        n5[1]++;
    }
    while (tmp2 % 3 == 0) {
        tmp2 /= 3;
        n3[1]++;
    }
    while (tmp2 % 2 == 0) {
        tmp2 /= 2;
        n2[1]++;
    }
    if(tmp!=tmp2)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<abs(n2[0]-n2[1])+abs(n3[0]-n3[1])+abs(n5[0]-n5[1])<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    // cin>>times;
    while (times--) { solve(); }
    return 0;
}
