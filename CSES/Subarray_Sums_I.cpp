#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, x; cin >> n >> x; vector<ll> v(n); for(auto &data : v) cin >> data;
    int cnt = 0;
    // for (int i = 0; i < n; i++) // naive 
    // {
    //     ll sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += v[j];
    //         if(sum == x) cnt++;
    //         if(sum > x) break;
    //     }
    // }

    ll sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        if(sum == x) 
        {
            cnt++; sum -= v[l]; l++;
        }
        while (sum > x && l <= r)
        {
            sum -= v[l]; l++;
            if(sum == x) cnt++;
        }
    }
    cout << cnt << nl;

    return 0;
}