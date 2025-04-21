#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int x, int y)
{
    return (x * y) / (__gcd(x, y));
}
const int N = 1E7 + 1;
vector<int> isPrime(N, true);
void preCalcPrimeNumbers()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) // O(N log(N))
    {
        if(isPrime[i])
        {
            for (int j = i+i; j <= N; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalcPrimeNumbers();

    // isPrime function works 
    // if(isPrime[9999991]) cout << "P" << nl;
    // else cout << "NO" << nl;

    ll cnt = 0;
    ll x; cin >> x;
    for (int i = 1; i <= x/2; i++) // wow it calculates for x/2
    {
        for (int j = i + 1; j <= x; j++)
        {
            // cout << i << " " << j << " -> " << data << nl;

            if(j%i == 0 && isPrime[j/i])
            {
                cnt++;
                // cout << i << " " << j << " -> " << data << nl;
            }
        }
        // cout << "For " << i << " to " << x << " : " << cnt << nl;
    }
    cout << cnt << nl;

    return 0;
}