#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = 1e6 + 7;
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)
bool is_div(string& s,string& a){
    string tmp="";
    while(tmp.size()<s.size()){
        tmp+=a;
        if(tmp==s){
            return true;
        }
    }
    return false;
}
void solve()
{
    int n, m;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string res="";
    if(s1.size()<s2.size()){
        swap(s1,s2);
    }
    lp(40){
        res+=s1;
        if(is_div(res,s2)){
            cout<<res<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); // x
    cout << fixed;     // b
    // freopen("f.in", "r", stdin);
    int times = 1;
    cin>>times;
    while (times--) { solve(); }
    return 0;
}
