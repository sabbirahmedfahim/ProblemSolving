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
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    vector<int> b = a;
    sort(all(b));

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int data = a[i];
        int lo = 0, hi = n-1, res = -1;
        while (lo <= hi)
        {
            int mid = (lo + hi)/2;
            if(b[mid] <= data) // b sorted
            {
                res = mid;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        if(res == -1) ans.push_back(0);
        else 
        {
            if(freq[data] > 1) res--;
            ans.push_back(res + 1);
        }
    }
    print(ans);
}
int_fast32_t main()
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