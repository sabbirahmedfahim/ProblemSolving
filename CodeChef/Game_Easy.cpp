// unsolved
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
    for(auto &e : a) cin >> e;

    vector<int> b = a; sort(all(b)); 

    for (int i = 1; i <= 2 * n; i++)
    {
        map<int, int> mp, curr;
        for (int j = max(0, n - i); j < n; j++)
        {
            mp[b[j]]++; 
        }
        for(auto [x,y] : mp) cout << x << " -- " << y << nl;
        cout << nl;

        int sum = 0, x = 0, k = i, prev = -1;
        for (int j = n-1; j >= 0; j--)
        {
            if(mp.count(a[j]) && mp[a[j]] > curr[a[j]] && k)
            {
                if(prev != -1 && (prev + x) > a[j])
                {
                    sum += prev + x, k--;
                }
                if(k != 0)
                {
                    sum += a[j] + (x++);
                    k--;
                    // prev = sum;
                }
            }
        }
        
        cout << sum << " ";
    }
    cout << nl;
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