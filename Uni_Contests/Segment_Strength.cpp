#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k, d; cin >> n >> k >> d;
    vector<int> a(n); for(auto &e : a) cin >> e; // only 0 and 1

    // if there are k times one's without inclusive zero
    bool isON = false;
    int sum = 0;
    for (int l = 0, r = 0; r < n;)
    {
        if(isON == false && a[r] == 1)
        {
            isON = true;
            l = r;
            sum += a[l];
            if(r-l+1 == k && sum%d == 0)
            {
                cout << l+1 << nl; return;  
            }
        }
        else if(a[r] == 1) 
        {
            sum += a[l];
            if(r-l+1 == k && sum%d == 0)
            {
                cout << l+1 << nl; return;
            }
        }
        else 
        {
            sum = 0; // sum will be reset
            isON = false;
        }

        r++;
    }

    // without inclusive 1, that means, 0 available, product is zero
    sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += a[r];
        if(r-l+1 == k)
        {
            if(sum%d == 0)
            {
                cout << l+1 << nl; return;
            }
            sum -= a[l];
            l++;
        }
    }

    // didn't match
    cout << -1 << nl;
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