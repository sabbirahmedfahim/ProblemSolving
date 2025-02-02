#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
even-odd pair??
*/
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    int even = 0, odd = 0;
    for(auto data : v) (data & 1)? odd++ : even++;
    // cout << "odd->" << odd << " # even->" << even << nl;

    // ll sum = 0;

    if(odd == 0) cout << 1 << nl;
    else if(odd > 0 && even == 0) 
    {
        //if(odd & 1) odd--;
        cout << odd-1 << nl;
    }
    else if(odd > 0 && even > 0) 
    {
        cout << odd + 1 << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}