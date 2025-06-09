#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;
    set<ll> st;
    for(auto e : a)
    {
        st.insert(e);
    }

    vector<ll> b = a; reverse(all(b));

    if(!is_sorted(all(a)) && !is_sorted(all(b)))
    {
        cout << "NO" << nl; return;
    }
    if(n == 2) // let, it will always work
    {
        if((a[0] & 1) == (a[1] & 1)) cout << "NO" << nl;
        else cout << "YES" << nl;
        return;
    }
    if(st.size() == 1)
    {
        if(a[0] & 1)
        {
            if(n & 1) cout << "NO" << nl;
            else
            {
                if(a[0] >= n) cout << "YES" << nl;
                else cout << "NO" << nl;
            }
        }
        else
        {
            if(n%2 == 0) cout << "NO" << nl;
            else
            {
                if(a[0] >= n) cout << "YES" << nl;
                else cout << "NO" << nl;
            }
        }
        return;
    }


    if(a[0] < a[n-1])
    {
        int prev = -1, cur = -1;
        for (int i = 1; i < n; i++)
        {
            if(prev == -1) prev = a[i] - a[i-1];

            cur = a[i] - a[i - 1];

            if(a[i] <= a[i - 1] || prev != cur)
            {
                cout << "NO" << nl; return;
            }

            prev = cur;
        }


        ll l = 1, r = 1E9;
        while (l <= r)
        {
            ll mid = l + (r-l)/2;

            if(mid + a[0] > a[n-1] + (mid * n)) r = mid - 1;
            else if(mid + a[0] < a[n-1] + (mid * n)) l = mid + 1;
            else 
            {
                cout << "YES" << nl; return;
            }
        }
        
    }
    else
    {
        int prev = -1, cur = -1;
        for (int i = 1; i < n; i++)
        {
            if(prev == -1) prev = a[i - 1] - a[i];

            cur = a[i-1] - a[i];

            if(a[i] >= a[i - 1] || prev != cur)
            {
                cout << "NO" << nl; return;
            }

            prev = cur;
        }

        // cout << "OK" << nl;

        ll l = 1, r = 1E9;
        while (l <= r)
        {
            ll mid = l + (r-l)/2;
            // cout << mid + a[0] << " - " << a[n-1] + (mid * n) << nl;

            if(mid + a[0] < a[n-1] + (mid * n)) r = mid - 1;
            else if(mid + a[0] > a[n-1] + (mid * n)) l = mid + 1;
            else 
            {
                cout << "YES" << nl; return;
            }
        }
    }

    cout << "NO" << nl;
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