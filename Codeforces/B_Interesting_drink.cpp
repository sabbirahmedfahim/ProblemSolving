#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    sort(all(v));
    
    int q; cin >> q;
    while (q--)
    {
        int data; cin >> data;

        // target or closest to the left
        int l = 0, r = n-1, mid, ans = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(data >= v[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << ans+1 << nl;
    }

    return 0;
}