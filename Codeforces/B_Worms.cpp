// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Explanation: 
Prefix Sum: 2, 9, 12, 16, 25
Level: 1-2, 3-9, 11-12, 13-16, 17-25
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    
    vector<ll> pref(n); 
    pref[0] = 0; /* first pile are labeled with numbers 1 to a1 */
    for (int i = 1; i < n; i++) pref[i] = pref[i-1] + v[i-1];
    // print(pref);
    
    int queries; cin >> queries;
    while (queries--)
    {
        ll data; cin >> data;

        // auto it = lower_bound(all(v), data);
        // cout << it - v.begin() << " ";

        auto it = lower_bound(all(pref), data);
        cout << it - pref.begin() << nl;
    }
    

    return 0;
}