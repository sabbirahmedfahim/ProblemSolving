// resolved from the TLE Eliminators 
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

    map<int, int> mp;
    for(auto e : a) 
    {
        mp[e]++;
        if(mp[e] >= 4)
        {
            cout << "Yes" << nl; return;
        }
    }

    sort(all(a));
    for (int i = 0; i < n; )
    {
        int cnt = 0, mx = 0;
        map<int, int> freq;
        while (i < n - 1 && (a[i] == a[i + 1] || a[i] + 1 == a[i + 1]))
        {
            if(a[i] == a[i + 1]) 
            {
                freq[a[i]]++; mx = max(mx, freq[a[i]]);
            }
            else cnt++;
            i++;
        }
        
        if(freq.size() >= 2)
        {
            cout << "Yes" << nl; return;
        }
        if(mx == 3 && cnt)
        {
            cout << "Yes" << nl; return;
        }
        i++;
    }

    cout << "No" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}