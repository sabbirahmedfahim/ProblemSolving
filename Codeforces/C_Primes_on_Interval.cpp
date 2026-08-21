#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e6 + 9; vector<bool> isPrime(N, true);

// using bitset you can solve upto around N = 10^8 in 1s
// const int N = 1E8 + 5; bitset<N> isPrime; // to have O(N/64) memory complexity

void sieve() 
{
    // isPrime.set(); // sets all bits to true
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++) 
    {
        if (isPrime[i]) 
        {
            for (int j = i * i; j < N; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    sieve();

    int a, b, k; cin >> a >> b >> k;

    auto canWePlace = [&](int mid)
    {
        int currPrimes = 0; 
        for (int i = mid; i <= b; i++)
        {
            if(isPrime[i]) currPrimes++;
        }
        
        return currPrimes < k;
    };

    int lo = 0, hi = 100, res = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    
    cout << res << nl;

    return 0;
}