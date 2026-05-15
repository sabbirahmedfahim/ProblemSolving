// used test case as a hint (2X times)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    sort(all(a));
    
    int mxScore = a.back() * n;

    int mexScore = 0, lastVal = -1;
    map<int, int> mp;
    for(auto e : a) mp[e]++;
    for (int i = 0; i < n; i++)
    {
        if(i == a.back() && mp.count(i))
        {
            mexScore++; lastVal = i; break;
        }
        if(mp.count(i)) 
        {
            lastVal = i; 
            mexScore += i + 1;
        }
        else break;
    }
    
    if(lastVal == -1)
    {
        cout << mxScore << nl; return;
    }
    if(a.back() == 0)
    {
        cout << n << nl; return;
    }

    // cerr << lastVal << nl;
    bool AllContributeToMex = true;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] + 1 < a[i + 1]) AllContributeToMex = false;
    }
    
    for (int i = lastVal + 1; i < n; i++)
    {
        if(AllContributeToMex == false)
        {
            AllContributeToMex = true;
        }
        else mexScore += lastVal + 1;
    }
    
    // cerr << mxScore << " -- " << mexScore << nl;
    cout << mxScore + mexScore << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}