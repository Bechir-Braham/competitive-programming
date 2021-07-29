#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int tab[n];
		for(int i =0;i<n;i++){
			cin>>tab[i];
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				cout<<tab[i/2];
			}
			else{
				cout<<tab[n-1-i/2];
			}
			cout<<" ";

		}
			cout<<endl;
	}


    return 0;
}
