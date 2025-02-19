#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    map<int, int> mp;
    for(auto e : v) mp[e]++;
    int ans = 0, cnt;

    set<int> weights;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // cout << v[i] << " " << v[j] << nl;
            int weight = v[i] + v[j];
            weights.insert(weight);
        }
    }

    for(auto e : weights) // taking the advantages of small constraints??
    {
        cnt = 0;
        map<int, int> arektaMp = mp;
        for(auto data : v)
        {
            if(arektaMp.count(e-data) && arektaMp.count(data))
            {
                // cout << weight << nl;
                if(e-data == data && arektaMp[data] == 1) continue;
                arektaMp[data]--;
                arektaMp[e-data]--;
                if(arektaMp[data] == 0) arektaMp.erase(data);
                if(arektaMp[e - data] == 0) arektaMp.erase(e - data);
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << nl;
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