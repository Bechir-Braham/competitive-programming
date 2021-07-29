#include <bits/stdc++.h>
#include <vector>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define lp(n) for (int i = 0; i < (n); i++)
using namespace std;

void solve ()
{
    int n;
    cin >> n;
    ll tmp;
    vector<ll> e, o;
    lp (n)
    {
        cin >> tmp;
        if (tmp % 2)
            o.PB (tmp);
        else
            e.PB (tmp);
    }
    sort (o.rbegin (), o.rend ());
    sort (e.rbegin (), e.rend ());
    int turn = 0;
    auto ite = e.begin ();
    auto ito = o.begin ();
    ll score = 0, scoro = 0;
    while (ite != e.end () or ito != o.end ()) {
        if (turn == 0) { // alice
            if (ite == e.end ()) {
                ito++;
            } else if (ito == o.end ()) {
                score += *ite;
                ite++;
            } else if (*ite >= *ito) {
                score += *ite;
                ite++;
            } else {
                ito++;
            }
            turn = 1;
        } else {
            if (ito == o.end ()) {
                ite++;
            } else if (ite == e.end ()) {
                scoro += *ito;
                ito++;
            }

            else if (*ito >= *ite) {
                scoro += *ito;
                ito++;
            } else {
                ite++;
            }
            turn = 0;
        }
    }
    if (score > scoro) {
        cout << "Alice\n";
    } else if (scoro > score) {
        cout << "Bob\n";
    } else {
        cout << "Tie\n";
    }
}

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (nullptr);
    cout.tie (nullptr);
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    while (times--) {
        solve ();
    }

    return 0;
}
