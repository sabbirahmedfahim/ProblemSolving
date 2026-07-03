// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int cnt = count(all(s), '*');
    if(cnt <= 1)
    {
        cout << 0 << nl; return;
    }

    multiset<int> ml;
    int suru = -1, shes = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '*') ml.insert(i);
        
        if(s[i] == '*')
        {
            if(suru == -1) 
            {
                suru = i, shes = i;
            }
            else shes = i;
        }
    }

    if(cnt == 2)
    {
        cout << shes - suru - 1 << nl;
        return;
    }
    
    // for (int l = 0, r = 0; r < n; r++) // O(n^2)
    // {
    //     if(r - l + 1 == cnt)
    //     {
    //         multiset<int> tmp = ml;
    //         curr = 0;
    //         for (int i = l; i <= r; i++)
    //         {
    //             curr += abs(i - *tmp.begin());
    //             tmp.erase(tmp.begin());
    //         }
            
    //         mn = min(mn, curr);

    //         l++;
    //     }
    // }
    
    int mid = -1, currSheeps = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '*') 
        {
            currSheeps++;

            if(currSheeps == cnt/2 + (cnt & 1)) 
            {
                mid = i; 
            }
        }
    }
    
    ml.erase(mid);
    int l = mid - cnt/2, r = l + cnt - 1, ans = 0;
    // cerr << l << " : " << r << nl;
    for (int i = l; i <= r; i++)
    {
        if(i == mid) continue;
        
        // cerr << i << " : " << i << " - " << *ml.begin() << nl;
        ans += abs(i - *ml.begin());
        ml.erase(ml.begin());
    }
    
    cout << ans << nl;
    
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