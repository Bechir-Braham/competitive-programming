#include <bits/stdc++.h>
const long long INF = 1e6 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll md = 1000000007;
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define lp(n) for(int i= 0; i < (n); i++)
using namespace std;

void solve()
{
    ll x,y,m;
    cin >> x>>y>>m;
    if(x>=m or y>=m){
        cout<<0<<endl;
        return ;
    }
    if(x<=0 and y<=0){
        cout<<-1<<endl;
        return;
    }
    ll tmp,a;
    ll count=0;
    x=min(x,y);
    y=max(tmp,a);
    while(x<0){
        x+=y;
        count++;
    }
    tmp=x;
    a=y;
    count+=2*(m-y)/(x+y);
    y+=(m-y)/(x+y)*(x+y);
    x=y-a;
    
    while(y<m){
        x+=y;
        y+=x;
        if(x>=m){
            count++;
            break;
        }
        count+=2;

    }
    cout<<count<<endl;

    



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	// freopen("f.in", "r", stdin);
    int times= 1;
	// cin>>times;
    while(times--) {
        solve();
    }

    return 0;
}
