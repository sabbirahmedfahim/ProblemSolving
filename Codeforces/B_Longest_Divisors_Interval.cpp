// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
The "longest divisors interval" refers to the largest interval of consecutive integers 
that are divisors of a given number `n`. For example:
Divisors of 12: 1, 2, 3, 4, 6, 12
The longest interval of consecutive divisors is [1, 2, 3, 4], which has 4 elements.

This logic assumes that the sequence must start from `1`. ***
*/
void solve()
{
    ll n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i != 0) break;
        cnt++;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}