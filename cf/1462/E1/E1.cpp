#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define loop(i, a, b) for(int i= a; i < b; i++)
using namespace std;

void p(int *t,int n){
	loop(i,0,n){
		cout<<t[i]<<" ";
	}
	cout<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, q, k= 2, m= 3;
	cin >> q;
	while(q--) {
        cin >> n;
        int t[n];
        loop(i, 0, n) { cin >> t[i]; }
        sort(t, t + n);
        int count= 0;
        for(int i= 0; i < n - m + 1; i++) {
            int j= i;
            while(t[j + m - 1] - t[i] <= k and j + m - 1 < n) {
                count++;
                j++;
            }
        }
        cout << count << "\n";
	}


    return 0;
}
