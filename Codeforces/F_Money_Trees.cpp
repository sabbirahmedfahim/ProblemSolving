#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> fruit(n), height(n);
    for(auto &data : fruit) cin >> data; for(auto &data : height) cin >> data;
    // print(fruit); print(height);

    vector <vector<ll> > v;
    vector<ll> tmp; tmp.push_back(fruit[0]);
    for (int i = 1; i < n; i++)
    {
        if(height[i-1] >= height[i] && height[i-1]%height[i] == 0) tmp.push_back(fruit[i]);
        else 
        {
            v.push_back(tmp);
            tmp.clear();
            tmp.push_back(fruit[i]);
        }
    }
    v.push_back(tmp);

    int ans = 0; 
    for(auto data : v) // data is a vector
    {
        // print(data);
        ll sum = 0;
        for (int l = 0, r = 0; r < data.size(); r++)
        {
            sum += data[r];
            if(sum <= k) ans = max(ans, r-l+1);
            while (sum > k && l <= r)
            {
                sum -= data[l]; l++;
            }
        }
    }
    cout << ans << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}