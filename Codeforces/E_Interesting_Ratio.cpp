// Resolved (must watch the explanation from TLE)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E7 + 1;
vector<int> isPrime(N, true);
set<int> primeNumbers;
void preCalcPrimeNumbers()
{
    // i * i optimize not recommended because we'll store all prime numbers
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= N; i++) // O(N log(N)) 
    {
        if(isPrime[i])
        {
            primeNumbers.insert(i);
            for (int j = i+i; j <= N; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
}
/*
(a, b) == (a, ap) -> pair
   ap <= n 
=> a <= n/p
*/
void solve()
{
    ll n; cin >> n;
    ll res = 0;
    for(auto e : primeNumbers)
    {
        if(e > n) break;
        res += (n/e);
    }
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalcPrimeNumbers();

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}