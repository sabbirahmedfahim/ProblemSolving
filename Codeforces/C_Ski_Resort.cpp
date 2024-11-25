// resolved (editorial)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
observation: use LL, otherwise you might get WA
*/
void solve()
{
    ll n, k, q; cin >> n >> k >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ((v[i] > q)? v[i] = 0 : v[i] = 1);
    }

    ll cnt = 0;
    vector<ll> ans;
    for (int i = 0, j = 0; i < n; i++, j++)
    {
        if(v[i] == 1) cnt++;
        else 
        {
            if(cnt >= k) ans.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt >= k) ans.push_back(cnt);

    ll sum = 0;
    for(auto data : ans) sum += ((data - k + 1) * (data - k + 2))/2;
    cout << sum << nl;

    // if(ans.empty()) cout << "#empty" << nl;
    // else print(ans);
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}