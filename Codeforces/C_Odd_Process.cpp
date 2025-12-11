#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    vector<ll> evens;
    ll oddAche = 0;
    ll mxOdd = 0;
    for(auto e : a)
    {
        if(e % 2 == 0) evens.push_back(e);
        else 
        {
            oddAche++;
            mxOdd = max(mxOdd, e);
        }
    }
    if(evens.size() > 0)
    {
        sort(all(evens)); reverse(all(evens));
    }
    vector<ll> evenPref(evens.size());
    if(evens.size() > 0) evenPref[0] = evens[0];
    for (int i = 1; i < evens.size(); i++)
    {
        evenPref[i] = evenPref[i - 1] + evens[i];
    }
    
    // print(evenPref);

    vector<ll> res;
    for (int i = 0; i < n; i++)
    {
        if(oddAche == 0) // edge case
        {
            res.push_back(0); continue; // let, ok
        }

        ll curr_k = i + 1;
        ll evenNibo = min(curr_k - 1, (ll) evens.size()); evenNibo--;
        ll need_odd = curr_k - (min(curr_k - 1,(ll) evens.size()));

        if((need_odd & 1) && evenNibo >= 0) res.push_back(mxOdd + evenPref[evenNibo]); // let, ok
        else if(evenNibo < 0) // let, ok
        {
            if(need_odd & 1) res.push_back(mxOdd);
            else res.push_back(0);
        } 
        else 
        {
            // cout << curr_k << " : " << evenNibo << " : " << need_odd << nl;
            if((need_odd % 2 == 0) && need_odd + 1 <= oddAche)
            {
                need_odd++; evenNibo--;
            }
            // cerr << evenNibo << nl;
            
            if(evenNibo >= 0 && (need_odd & 1)) res.push_back(mxOdd + evenPref[evenNibo]);
            else if(need_odd & 1) res.push_back(mxOdd);
            else res.push_back(0);
        }
    }
    
    print(res);
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