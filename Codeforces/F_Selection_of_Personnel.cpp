// editorial must
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
// ll comb(ll n, ll people) // integer overflow, but easier to understand
// {
//     ll hi = 1;
//     for (ll i = n-people+1; i <= n; i++)
//     {
//         hi *= i;
//     }
//     ll lo = 1;
//     for (ll i = 1; i <= people; i++)
//     {
//         lo *= i;
//     }

//     return(hi/lo);
// }
ll comb(ll n, ll people)
{
    ll res = 1;
    for (ll i = 1, j = n; i <= people; i++, j--)
    {
        res *= j;
        res /= i;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;

    ll res = 0;
    for (int i = 5; i <= 7; i++)
    {
        res += comb(n, i);
    }
    
    cout << res << nl;

    return 0;
}

/*
 * Explanation of C(10, 4) simplification:
 * The combination formula is C(n, k) = n! / (k! * (n-k)!).
 * For C(10, 4), this becomes:
 * 
 * C(10, 4) = 10! / (4! * 6!)
 * 
 * We can simplify this by expanding the factorials:
 * 
 * 10! = 10 * 9 * 8 * 7 * 6!
 * 
 * So, the 6! terms cancel out, and we are left with:
 * 
 * C(10, 4) = (10 * 9 * 8 * 7) / 4!
 * 
 * Now, 4! = 4 * 3 * 2 * 1 = 24, so we calculate:
 * 
 * C(10, 4) = (10 * 9 * 8 * 7) / 24
 * 
 * This gives the result directly by multiplying the top terms and dividing by 4!.
 */