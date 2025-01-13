// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Numbers with the difference of 1 are always relatively prime.
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll l, r; cin >> l >> r;
    ll targetCnt = (r-l+1)/2;
    
    vector<pair<ll, ll>> ans;
    while (targetCnt--)
    {
        ans.push_back({l, l+1});
        l += 2;
    }
    cout << "YES" << nl;
    for(auto data : ans)
    {
        cout << data.first << " " << data.second << nl;
    }
    

    return 0;
}