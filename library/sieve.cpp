#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool> prime(1e5, true);
// prime must be a vector if n=1e7
vector<ll> v;
// v containes the prime numbers in increasing order

void SieveOfEratosthenes (ll n)

{
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p]) v.push_back (p);
}

