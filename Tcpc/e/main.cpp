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

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
freopen("luka.in", "r", stdin);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0,x=1;
    for(int i=0;i<n;++i){
    ans=(11*ans+x*(s[i]-'0'))%mod;
    x=(2*x)%mod;
    }
    cout<<ans<<'\n';
}

return 0;
}
