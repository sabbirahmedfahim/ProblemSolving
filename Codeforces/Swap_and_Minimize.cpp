#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> v(n); for(auto &data : v) cin >> data;

    vector<ll> prefMin(n, LLONG_MAX), suffixMin(n, LLONG_MAX);
    prefMin[0] = v[0];
    for (int i = 1; i < n; i++) prefMin[i] = min(v[i], prefMin[i-1]);
    suffixMin[n-1] = v.back();
    for (int i = n-2; i >= 0; i--) suffixMin[i] = min(v[i], suffixMin[i+1]);
    
    deque<int> dq;
    vector<ll> precalculated_max_window(n - k + 1);
    for (int i = 0; i < n; i++) 
    {
        if (!dq.empty() && dq.front() < i - k + 1) dq.pop_front();
        while (!dq.empty() && v[dq.back()] <= v[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) precalculated_max_window[i - k + 1] = v[dq.front()];
    }

    ll ans = LLONG_MAX, sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        if(r-l+1 == k)
        {
            ll mxFromWindow, mnBefore = LLONG_MAX, mnAfter = LLONG_MAX;
            mxFromWindow = precalculated_max_window[l];
            if(l > 0) mnBefore = prefMin[l-1];
            if(r+1 < n) mnAfter = suffixMin[r+1];
            ll tmp = sum;
            if(mxFromWindow > min(mnBefore, mnAfter))
            {
                tmp -= mxFromWindow; tmp += min(mnBefore, mnAfter); 
            }
            ans = min(ans, tmp);
            sum -= v[l]; l++;
        }
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