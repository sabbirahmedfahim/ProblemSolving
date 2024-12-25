#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    ll target = accumulate(all(v), 0) - 1;
/*
    The statement is somewhat unclear to me. One thing is clear—our target is the sum of all
    elements minus 1. If and only if we remove 1 from the array, it can be proven that
    there exists a subsequence. However, there could be multiple 1s and even several 0s.
    When it comes to 0s, there will be too many options, which leads to the 2^n formula. Nice!
*/  
    ll zero = 0, one = 0;
    for(auto data : v) 
    {
        if(data == 0) zero++;
        if(data == 1) one++;
    }
    cout << (1LL << zero) * one << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}