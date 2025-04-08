#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isPrime(int n) // O(logN)
{
    if(n == 1) return false; // 1 is not a prime number, it's a special number
    for (int i = 2; i*i <= n; i++) // 1 theke korle n ta include hoto, akon n also excluded hahaha
    {
        if(n%i == 0) return false; // extra kore (n/i) korar dorkar nai [think why]
    }
    return true;
}
void solve()
{
    int x, k; cin >> x >> k;
    int tmp = x;

    int digit = 0;
    while (x)
    {
        digit++;
        x /= 10;
    }
    
    if(digit >= 2)
    {
        if(k == 1)
        {
            if(isPrime(tmp)) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
        else cout << "NO" << nl;

        return;
    }

    // cout << "Due" << nl;

    // if one digit
    string s;
    for (int i = 0; i < k; i++)
    {
        s += tmp + '0';
    }

    x = stoll(s);
    
    // cout << x << nl;
    if(isPrime(x)) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1; 
    cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
} 