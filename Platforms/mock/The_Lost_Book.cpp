#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<ll> v2 = v;
    sort(v.begin(), v.end());
    ll target; cin >> target;
    ll l = 0, r = n-1;
    ll mid;
    while (l <= r)
    {
        mid = (l+r)/2;
        if(v[mid] == target) break;
        else if(target > v[mid]) l = mid+1;
        else r = mid - 1;
    }
    if(l<=r) 
    {
        for (int i = 0; i < n; i++)
        {
            if(v[mid] == v2[i])
            {
                cout << i << nl; break;
            }
        }
        
    }
    else cout << -1 << nl;

    return 0;
}