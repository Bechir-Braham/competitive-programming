#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MAXN =(ll) 1e6 + 7;
const ll INF=(ll)__builtin_huge_vall(); // return float
const ll md = 1000000007;
#define PB      push_back
#define MP      make_pair
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lp(n)   for (int i = 0; i < (n); i++)

void solve()
{
    int n, m;
    string a="",b;
    cin >> n;
    cin>>b;
    a="1";
    string d;
    d=(b[0]=='1')?"2":"1";
    for(int i=1;i<n;i++){
        if(b[i]=='1'){
            if(d[i-1]=='2'){
                a+="0";
                d+="1";
            }
            else if(d[i-1]=='1'){
                a+="1";
                d+="2";
            }
            else{
                a+="1";
                d+="2";
            
            }
        }
        else{
            if(d[i-1]=='1'){
                a+="0";
                d+="0";
            }
            else if(d[i-1]=='2'){
                a+="1";
                d+="1";

            }
            else{
                a+="1";
                d+="1";
            }
        }

    }
    cout<<a<<endl;

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

