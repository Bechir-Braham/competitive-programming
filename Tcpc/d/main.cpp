#include <bits/stdc++.h>
#define PI 3.14159265359
#define lp(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
typedef long double ld;

using namespace std;

int main ()
{
    ios_base::sync_with_stdio (false);
    cin.tie (0);
    cout.tie (0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        lp (i, n) cin >> a[i];
        lp (i, n) { cin >> b[i]; }
        sort (a, a + n);
        sort (b, b + n);
        if (a[0] < b[0] && a[n - 1] > b[n - 1]) {
            cout << "Youssef";
            continue;
        }
        if (b[0] < a[0] && b[n - 1] > a[n - 1]) {
            cout << "Rashad";
            continue;
        }
        if (a[0] < b[0]) {
            ll cartemin, cartemax;
            int j = 0;
            while (1) {
                if (j == n) {
                    cout << "Rashad";
                    break;
                }
                cartemin = b[j];
                cartemax = a[n - 1 - j];
                if (cartemin > cartemax) {
                    cout << "Youssef";
                    break;
                }
                j++;
            }
        }
        if (a[0] > b[0]) {
            ll cartemin, cartemax;
            int j = 0;
            while (1) {
            	if(j==n){
            		cout<<"Youssef";
            	}
				cartemin=a[j];
				cartemax=b[n-j-1];
				if(cartemin>cartemax){
					cout<<"Rashad";
					break;
				}
            }
        }
		cout<<"\n";
    }
    return 0;
}
