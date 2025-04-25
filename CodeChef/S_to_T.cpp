// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string x, y; cin >> x >> y;
    for (int i = 0; i < n; i++)
    {
        if(x[i] == '1' && y[i] == '0') break;
        if(x[i] == '1' && y[i] == '1') break;
        if(x[i] == '0' && y[i] == '1')
        {
            cout << -1 << nl; return;
        }
    }
    
    vector<int> res;
    for (int i = n-1; i > 0; i--)
    {
        if(x[i] != y[i])
        {
            if(x[i - 1] == '1') res.push_back(i);
            else 
            {
                cout << -1 << nl; return;
            }
        }
    }
    
    if(!res.empty()) 
    {
        cout << res.size() << nl;
        print(res);
    }
    else cout << 0 << nl;
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