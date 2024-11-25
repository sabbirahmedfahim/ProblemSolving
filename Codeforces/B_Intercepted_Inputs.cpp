// accepted
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll k; cin >> k;
    map<ll, ll> mp;
    for (int i = 0; i < k; i++)
    {
        ll data; cin >> data;
        mp[data]++;
    }

    ll n = k-2, row = -1, col = -1;

    vector<ll> tmp;
    for(auto [key, val] : mp) tmp.push_back(key);

    for (int i = 0; i < tmp.size(); i++)
    {
        for (int j = 0; j < tmp.size(); j++)
        {
            if(tmp[i] * tmp[j] == n && mp.count(tmp[i]) && mp.count(tmp[j])) 
            {
                // if(i == j && mp.count(i) < 2) continue;
                row = tmp[i]; col = tmp[j]; i = tmp.size();
            }
        }
    }

    cout << row << " " << col << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}