// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; 
    map<ll, ll> mp; 
    for (int i = 0; i < n; i++)
    {
        ll data; cin >> data; mp[data]++;
    }
    vector<ll> fq;
    for(auto [key, val] : mp) fq.push_back(val);
    sort(all(fq));

    int cnt = 0;
    for (int i = 0; i < mp.size()-1; i++) // the size of n and the size of mp can be different [think]
    {
        if(k >= fq[i]) k -= fq[i];
        else break;
        cnt++;
    }
    cout << mp.size() - cnt << nl; 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}