#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int cur = 1;
    vector<int> res;
    while (n--)
    {
        int l, r; cin >> l >> r;

        if(l <= cur && r >= cur) res.push_back(cur++);
        else if(cur < l) 
        {
            cur = l;
            res.push_back(cur++);
        }
        else res.push_back(0);
    }
    
    for(auto e : res) cout << e << " "; cout << endl;
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