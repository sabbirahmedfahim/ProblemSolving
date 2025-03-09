// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
Lesson: The prefix XOR of an array works like the prefix sum of the array.
*/
void solve()
{
    int n; cin >> n; vector<int> a(n); 
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        XOR ^= a[i];
    }
    
    if(XOR == 0) // if the xor is zero then we can split the array into two parts
    {
        cout << "YES" << nl; return;
    }

    // can we split the array at least twice
    /* I'm not sure whether it works or not, but if it does, it could be a valid 
    approach for sequential XOR checking (because we can also get the XOR of arbitrary elements),
    considering the condition that states we can XOR two elements if they are adjacent. */
    int x = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        x ^= a[i];
        if(x == XOR)
        {
            cnt++, x = 0;
        }
    }
    
    if(cnt >= 2) cout << "YES" << nl;
    else cout << "NO" << nl;
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