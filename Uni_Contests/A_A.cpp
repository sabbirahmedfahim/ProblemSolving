#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;
    
    vector<ll> ans;

    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            ans.push_back(i);
            if(i != n/i) ans.push_back(n/i);
        }
    }

    sort(all(ans));
    
    for(auto data : ans) cout << data << nl;

    return 0;
}