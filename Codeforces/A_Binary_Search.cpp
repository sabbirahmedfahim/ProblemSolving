#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q; 
    vector<ll> v(n); for(auto &data : v) cin >> data;

    while (q--)
    {
        ll target; cin >> target;
        int l = 0, r = n-1, mid;
        while (l <= r)
        {
            mid = l+(r-l)/2;
            if(target == v[mid]) break;
            else if(target >= v[mid]) l = mid + 1;
            else r = mid - 1;
        }
        if(l <= r) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    

    return 0;
}