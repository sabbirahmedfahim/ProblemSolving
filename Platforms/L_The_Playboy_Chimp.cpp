#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation : n <= 50000, q <= 10E9
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data; 
    int q; cin >> q;
    while (q--) 
    {
        // upper bound, lower bound
        ll target; cin >> target;
        int l = 0, r = n-1, mid, upperBound = -1, lowerBound = -1;

        // lower bound
        while (l <= r)
        {
            mid = l+(r-l)/2;
            if(target > v[mid])
            {
                lowerBound = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        if(lowerBound != -1) cout << v[lowerBound] << " ";
        else cout << "X" << " ";

        // upper bound
        l = 0, r = n-1;
        while (l <= r)
        {
            mid = l+(r-l)/2;
            if(target < v[mid])
            {
                upperBound = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if(upperBound != -1) cout << v[upperBound] << nl;
        else cout << "X" << nl;
    }
    

    return 0;
}