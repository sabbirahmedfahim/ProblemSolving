#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; deque<int> dq(n); for(auto &e : dq) cin >> e; sort(all(dq));

    auto canWePlace = [&](int mid)
    {
        // mid -> candidate k

        deque<int> tmp = dq;

        for (int i = 1; i <= mid; i++)
        {
            int data = mid - i + 1;
            // if(tmp.empty() || data > tmp.back()) return false;

            bool isFound = false;
            for (int j = tmp.size()-1; j >= 0; j--)
            {
                if(tmp[j] <= data)
                {
                    tmp[j] = -1; sort(all(tmp)); 
                    tmp.pop_front(); isFound = true;
                    break;
                }
            }
            if(isFound == false) return false;
            tmp.front() += data; sort(all(tmp));
        }
        return true;
    };

    int l = 0, r = 105, mid, ans = -1;

    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;  
        solve();
    }

    return 0;
}