#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
max. possible cost
*/
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> have;
    for(auto e : a) have.insert(e);
    if(have.count(0)) have.erase(0); // rmv extra zero

    int right = n, left = 1;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            while (have.count(right))
            {
                right--;
            }
            a[i] = right; have.insert(right);
        }
    }
    
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != i + 1)
        {
            if(l == -1) l = i + 1;
            else r = i + 1;
        }
    }
    
    if(l == -1) cout << 0 << nl;
    else cout << r - l + 1 << nl;
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