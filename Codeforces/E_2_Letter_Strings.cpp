// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n; 
    vector<string> v(n); 
    map<char, ll> left, right;
    map<string, ll> freq;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        left[v[i].front()]++; // don't be confused, it's just a vector of strings
        right[v[i].back()]++;
        freq[v[i]]++; // added the string in the freqeuency map
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll cnt = 0;
        cnt = max(1LL* 0, left[v[i].front()] - freq[v[i]]); // left side freq theke string freq minus, string freq koray duplicate handle o holo condition onujai
        ans += cnt;
        cnt = max(1LL * 0, right[v[i].back()] - freq[v[i]]); 
        ans += cnt;

        if(left[v[i].front()] > 0) left[v[i].front()]--;
        if(right[v[i].back()] > 0) right[v[i].back()]--;
        if(freq[v[i]] > 0) freq[v[i]]--; // pop-ed the string from the freq. map
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}