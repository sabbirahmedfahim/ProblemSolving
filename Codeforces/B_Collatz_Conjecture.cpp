// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Let x = 12, y = 5. How can we find mathematically for which value y will be divisible?

It's x % y = 12 % 5 = 2. Extra value 2, we need to make it x % y == 0 somehow.
How can we find the value? EASY... need = y - x % y = 5 - (12 % 5) = 5 - 2 = 3.
Finally, we need 3 to make it divisible. 15 % 5 == 0.
It seems to be useless for small values; however, for 10^9 or larger values, we can 
easily find it in O(1)!!
*/
void solve()
{
    int x, y, k; cin >> x >> y >> k; 
    while (k > 0 && x > 1)
    {
        int needToMakeDivisible = y - x % y;
        if(needToMakeDivisible >= k)
        {
            x += k;
            k = 0; // think
        }
        else // k is stricktly greater than needToMakeDivisible 
        {
            // k theke value komiye x te dicchi
            x += needToMakeDivisible;
            k -= needToMakeDivisible;
        }
        while (x%y == 0) x /= y; // joto choto kora jay :)
    }
    if(k > 0)
    {
        k %= y - 1; // just reducing the loop, think Number Line
        x += k;
        while (x%y == 0) x /= y;
    }
    cout << x << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}