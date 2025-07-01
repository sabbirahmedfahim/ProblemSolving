#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int l = -1, r = -1;
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            if(l == -1)
            {
                l = i, r = i;
            }
            else r = i;
        }
    }
    
    vector<int> v;
    for (int i = l; i <= r; i++)
    {
        v.push_back(a[i]);
    }
    
    sort(all(v));
    int mx = v.back(), mn = v[0];

    int curMn = mn;
    int L = l, R = r;
    for (int i = l-1; i >= 0; i--)
    {
        if(a[i] == b[i] && a[i] <= curMn)
        {
            curMn = a[i];
            L--;
        }
        else break;
    }

    int curMx = mx;
    for (int i = r + 1; i < n; i++)
    {
        if(a[i] == b[i] && a[i] >= curMx)
        {
            curMx = a[i];
            R++;
        }
        else break;
    }
    
    cout << L+1 << " " << R+1 << nl;
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