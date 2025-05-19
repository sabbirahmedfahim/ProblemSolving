#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int AND = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != i)
        {
            // cout << a[i] << nl;
            if(AND == -1) AND = a[i];
            else AND &= a[i];
        }
    }
    
    cout << AND << nl;
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
