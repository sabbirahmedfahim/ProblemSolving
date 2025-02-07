// resolved [read the editorial]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) // taking the unique values only because [think the easy hacks]
    {
        int data; cin >> data; s.insert(data);
    }
    
    vector<int> v;
    for(auto e : s) v.push_back(e); // since we converting from set->vec, it is Sorted :D

    int l = 0, r = 0, cnt = 1, sz = s.size();
    /* find the maximum length subarray where the difference between the maximum and minimum does not exceed n−1 */
    while (r < sz)
    {
        while (l <= r && r < sz)
        {
            if(v[r]-v[l] <= n-1) 
            {
                cnt = max(cnt, r-l+1);
                r++;
            }
            else 
            {
                l++; break;
            }
        }
        
        // if(v[r] <= n) 
        // {
        //     cnt = max(cnt, r-l+1);
        // }
        // else l = r;
        // r++;
    }
    cout << cnt << nl;
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