#include <bits/stdc++.h>
#include <string>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define loop(i, a, b) for(int i= a; i < b; i++)
using namespace std;

void p(int *t)
{
    loop(i, 0, 10) { cout << t[i]<<" "; }
    cout << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q, x;
    cin >> q;
	while(q--){
		cin>>x;
		if(x<10) cout<<x<<endl;
		else if(x>45) cout<<-1<<endl;
		else{
			int i;
			for(i=9;i>0;i-- ){
				if(x-i>0){
					x-=i;
				}
				else break;
			}
			i++;
			cout<<x;
			while(i<10){
				cout<<i++;
			}
			cout<<endl;

		}
	}


    return 0;
}
