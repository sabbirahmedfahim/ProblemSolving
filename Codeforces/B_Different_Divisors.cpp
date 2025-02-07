// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int mxN = 1E5;
vector<int> allPrimes;
void sieve()
{
    vector<bool> prime(mxN+1, true);
    for (int i = 2; i*i <= mxN; i++) // O(nlog(log(n)))
    {
        if(prime[i])
        {
            for (int j = i+i; j <= mxN; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= mxN; i++) // O(n)
    {
        if(prime[i]) allPrimes.push_back(i);
    }
}
void solve()
{
    int d; cin >> d;
    int d1 = -1, d2 = -1;
    for (int i = 0; i < allPrimes.size(); i++)
    {
        if(d1 == -1)
        {
            if(allPrimes[i] - 1 >= d)
            {
                d1 = allPrimes[i]; continue;
            }
        }
        else
        {
            if(allPrimes[i] - d1 >= d)
            {
                d2 = allPrimes[i]; 
                cout << d1 * d2 << nl; return;
            }
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    sieve();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }
    
    // print(allPrimes);

    return 0;
}