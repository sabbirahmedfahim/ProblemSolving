#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, f, k; cin >> n >> f >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;

    map<int, int> mp, mp2;
    for(auto e : a) mp[e]++;
    mp2 = mp;

    f--; // 0-based
    int data = a[f];
    // cout << data << nl;

    sort(all(a)); reverse(all(a));
    bool maybeTeAche = false;
    for (int i = 0; i < k; i++)
    {
        if(a[i] == data) 
        {
            maybeTeAche = true; 
        }
        mp2[a[i]]--;

        if(mp2[a[i]] == 0) mp2.erase(a[i]);
    }
    
    if(maybeTeAche && mp2.count(data)) cout << "MAYBE" << nl;
    else if(maybeTeAche) cout << "YES" << nl;
    else cout << "NO" << nl;
    
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