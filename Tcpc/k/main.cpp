#include <bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define PI = arccos(-1)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int INF=1e9;
const ll LINF=1e18;
const int mod = 1e9 + 7;

string bachra(string s,int x){
    int i=0;
    string s1="";
    while(x){
        if (x&1) s1+=s[i];
        i++;
        x=x>>1;
    }
    return s1;
}

int main() {
freopen("luka.in","r",stdin);
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll range=(1<<n)-1;
    ll ans=0,x=0;
    for(int i=0;i<=range;++i){
        stringstream test((bachra(s,i)));
        test>>x;
        ans+=x;
    }
    cout<<ans<<'\n';
}

return 0;
}
