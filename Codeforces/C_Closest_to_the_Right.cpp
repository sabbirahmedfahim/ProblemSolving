#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q; vector<ll> v(n); for(auto &data : v) cin >> data;
    while (q--)
    {
        ll data; cin >> data;
        int l = 0, r = n-1, mid, upperBound = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(data <= v[mid])
            {
                upperBound = mid; 
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if(upperBound == -1) cout << n+1 << nl;
        else cout << upperBound+1 << nl;
    }
    

    return 0;
}