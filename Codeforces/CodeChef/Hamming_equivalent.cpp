#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
rule no 1 : build custom test case.

1
5
3 5 2 4 1

Expected: ???
*/
void popCount()
{
    for (int i = 1; i <= 15; i++)
    {
        cout << i << " -> " << __builtin_popcount(i) <<  nl;
    }
}
void solve()
{
    int n; cin >> n; vector<int> v(n+1); 
    for (int i = 1; i <= n; i++) cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        if(__builtin_popcount(i) != __builtin_popcount(v[i]))
        {
            cout << "No" << nl; return;
        }
    }
    cout << "Yes" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) 
    {
        solve();
        // popCount();
    }

    return 0;
}
