// resolved [i should solve it again]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;

    int res = 0;
    for (int i = 0; i < k/2; i++)
    {
        map<char, int> mp;
        for (int j = i; j < n; j+=k) mp[s[j]]++;
        for (int j = k-i-1; j < n; j+=k) mp[s[j]]++;

        int mx_occ = 0, tot_occ = 0;
        for(auto [key, val] : mp)
        {
            mx_occ = max(mx_occ, val);
            tot_occ += val;
        }
        res += (tot_occ - mx_occ);
    }
    
    if(k & 1)
    {
        map<char, int> mp;
        for (int j = k/2; j < n; j+=k) mp[s[j]]++;

        int mx_occ = 0, tot_occ = 0;
        for(auto [key, val] : mp)
        {
            mx_occ = max(mx_occ, val);
            tot_occ += val;
        }
        res += (tot_occ - mx_occ);
    }

    cout << res << nl;
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