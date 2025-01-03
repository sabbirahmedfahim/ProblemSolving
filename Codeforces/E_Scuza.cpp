#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() // implementation ***
{
    int n, q; cin >> n >> q; vector<ll> v(n), queries(q); 
    for(auto &data : v) cin >> data;
    for(auto &data : queries) cin >> data;
    // sort(all(v)); // sort korle problem hocche, and sort kora chara bs chalano jabena
    // print(v);
    // print(queries);
    
    vector<ll> prefSum(n); prefSum[0] = v[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + v[i];
    ll mx = *max_element(all(v));

    for (int i = 1; i < n; i++) v[i] = max(v[i], v[i-1]); // did this the the binary search : sort o hoye geche hahaha

    for(auto data : queries)
    {
        // closest to the right
        int l = 0, r = n-1, mid, idx = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            // if(data <= v[mid]) // stricktly greater
            if(data < v[mid])
            {
                idx = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        if(data >= mx) cout << prefSum.back() << " ";
        else if((idx-1) < 0) cout << 0 << " ";
        else cout << prefSum[idx-1] << " ";
    }
    cout << nl;
}
void solve2() // using build-in-functions 
{
    int n, q; cin >> n >> q; vector<ll> v(n), queries(q); 
    for(auto &data : v) cin >> data;
    for(auto &data : queries) cin >> data;
    
    vector<ll> prefSum(n); prefSum[0] = v[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + v[i];

    for (int i = 1; i < n; i++) v[i] = max(v[i], v[i-1]); // did this the the binary search : sort o hoye geche hahaha

    for(auto data : queries) 
    {
        auto it = upper_bound(all(v), data);
        int idx = it - v.begin();

        // if(it == v.end() || (idx - 1) < 0) cout << 0 << " "; // problem with the condition is (according to the statement) if it crossed the maximum, we can take all of the values, whereas we're printing zero!
    
        if(it == v.end()) cout << prefSum.back() << " ";
        else if((idx - 1) < 0) cout << 0 << " ";
        else cout << prefSum[idx-1] << " ";
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}