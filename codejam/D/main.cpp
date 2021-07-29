#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN = (ll)1e6 + 7;
const ll INF = (ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define endl     '\n'
#define PB       push_back
#define MP       make_pair
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define lp(i, n) for (int i = 0; i < (n); i++)
class person {
  public:
    int score_up = 0;
    int score_low = 0;
    int num_1 = 0;
    int id;
    ld p[100]={};
    int gap=0;
    bool operator<(const person &degla) { return num_1 < degla.num_1; }
    void calc()
    {
        lp(i,99)
        {
            if(p[i]<p[i+1])
            {
                gap+=p[i+1]-p[i];
            }
        }

    }

};
void solve(int i)
{
    int p, t;
    vector<string> v(200);
    lp(i, 100) { cin >> v[i]; }
    int max_c = 0;
    int max_owner = 0;
    vector<person> people(100);
    lp(i, 100)
    {

        int tmp = 0;
        for (auto a : v[i]) {
            if (a == '1') { tmp++; }
        }
        if (tmp > max_c) {
            max_c = tmp;
            max_owner = i + 1;
        }
        people[i].id = i + 1;
        people[i].num_1 = tmp;
    }
    sort(all(people));
    vector<pair<int, int>> q_diff(10000);
    lp(i, 10000)
    {
        q_diff[i].second = i;
        q_diff[i].first = 0;
    }

    lp(i, 10000)
    {
        for (int j = 0; j < 100; j++) {
            if (v[j][i] == '1') { q_diff[i].first++; }
        }
    }
    sort(all(q_diff));
    /*
     * e7seb 9adeh pourcentage mtaa el 3bed eli jewbet aal difficulté x
     * bch mbaed n*/
    lp(i,10000)
    {
        lp(j,100)
        {
            person& pp=people[j];
            if(v[j][i]=='1')
            {
                pp.p[q_diff[i].first]++;
            }          
        }
    }
    ld pour[100]={};
    lp(i,10000)
    {
        pour[q_diff[i].first]++;
    }
    lp(i,100)
    {
        person& pp=people[i];
        lp(j,100)
        {
            pp.p[j]/=pour[j];
        }
        
    }
    lp(i,100)
    {
        people[i].calc();
    }
    ld moo=0;
    int pos=0;
    lp(i,100)
    {
        if(people[i].gap>moo and people[i].num_1>4500 ) 
        {
            moo=people[i].gap;
            pos=people[i].id;

        }
    }
    lp(i,100)
    {
        lp(j,100)
        {
            cout<<people[i].p[j]<<",";
        }
        cout<<endl;
    }
    // cout<<"Case #"<<i<<": "<<pos<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin >> times;
    int p;
    cin >> p;
    for (int i = 1; i <= times; i++) { solve(i); }
    return 0;
}
