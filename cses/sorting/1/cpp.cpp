#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define lp(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	ll t[n];
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	if(n==1){
		cout<<1;
		return 0;
	}
	sort(t,t+n);
	int count=1;
	for(int i=1;i<n;i++){
		if(t[i]!=t[i-1])count++;
	}
	cout<<count;


    return 0;
}
