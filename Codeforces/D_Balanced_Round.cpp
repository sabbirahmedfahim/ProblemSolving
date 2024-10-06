#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll mx = 0;
        ll cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if(v[i] - v[i-1] <= k) cnt++;
            else cnt = 0;
            mx = max(cnt, mx);
        }
        cout << n - (mx + 1) << nl;
    }

    return 0;
}