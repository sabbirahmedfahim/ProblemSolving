// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
let, t1 -> time taken to reach from x to 0
     t2 -> time taken to reach 0 to 0
then, res -> 1 + (k-t1)/t2  [t1 <= k]
*/
void solve()
{
    ll n, x, k; string s; cin >> n >> x >> k >> s;

    bool isPossible = false;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'L') x--;
        else x++;
        k--;

        if(x == 0)
        {
            isPossible = true; break;
        }
        if(k == 0)
        {
            cout << 0 << nl; return;
        }
    }

    if(isPossible == false) // how? because the constraints :  −n ≤ x ≤ n
    {
        cout << 0 << nl; return;
    }

    // i know my x is 0

    isPossible = false;
    ll res = 1; // this is the value of t1, i.e time to reach x to 0
    ll time = 0; // t2
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'L') x--;
        else x++;

        time++;

        if(x == 0)
        {
            isPossible = true; break;
        }
    }
    
    if(isPossible)
    {
        res += (k/time);
    }

    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}