#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    ll bAche, sAche, cAche, bCost, sCost, cCost, moneyAche;
    cin >> bAche >> sAche >> cAche >> bCost >> sCost >> cCost >> moneyAche;

    ll bread = count(all(s), 'B');
    ll sausage = count(all(s), 'S');
    ll cheese = count(all(s), 'C');
    // cout << bread << " " << sausage << " " << cheese << nl;
    

    auto canWePlace = [&](ll mid)
    {
        // to make mid num burgers, we need-
        ll tmp = moneyAche;
        ll bNeed = bread * mid, sNeed = sausage * mid, cNeed = cheese * mid;
        bNeed -= bAche, sNeed -= sAche, cNeed -= cAche;

        // cout << bNeed << " " << sNeed << " " << cNeed << nl;

        if(bNeed > 0)  tmp -= (bNeed * bCost);
        if(sNeed > 0) tmp -= (sNeed * sCost);
        if(cNeed > 0) tmp -= (cNeed * cCost);

        // cout << tmp << nl;
        
        return (tmp >= 0);
    };

    ll l = 0, r = 1E12 + 101, mid, ans = -1;

    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}