// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        if(data <= n) a.push_back(data);
    }
    map<int, int> mp;
    for(auto e : a) mp[e]++;

    int mx = 0, cur;
    for (int i = 1; i <= n; i++) // O(n*sqrt(n))
    {
        cur = 0;
        for (int j = 1; j*j <= i; j++) // O(sqrt(n))
        {
            if(i%j == 0) 
            {
                cur += mp[j];
                if(i/j != j) cur += mp[i/j];
            }
        }
        mx = max(mx, cur);
    }
    
    cout << mx << nl;
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