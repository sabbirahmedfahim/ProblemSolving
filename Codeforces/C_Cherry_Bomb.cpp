#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n); 
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    /* two cases, if the freq of -1 in Bi is n, then count can be more than 1,
    else, it will always 0 or 1 */

    int cnt__1 = 0;
    for(auto e : b) 
    {
        if(e == -1) cnt__1++;
    }

    // case-1
    if(cnt__1 == n)
    {
        int mx = *max_element(all(a)), cur_mx = -1;
        
        int mn = *min_element(all(a));
        int data = mx - mn;

        if(data > k) cout << 0 << nl; 
        else cout << k - data + 1 << nl;
        return;
    }

    // case-2
    ll complement = -1;
    for (int i = 0; i < n; i++)
    {
        if(complement == -1 && a[i] != -1 && b[i] != -1)
        {
            complement = a[i] + b[i];
        } 
        else if(complement != -1 && a[i] != -1 && b[i] != -1 && (a[i] + b[i]) != complement)
        {
            cout << 0 << nl; return;
        } 
    }

    // case-3
    // cout << complement << nl;
    ll cur_mx = -1;
    for (int i = 0; i < n; i++)
    {
        if(b[i] == -1) 
        {
            if(a[i] > complement)
            {
                cout << 0 << nl; return;
            }
            cur_mx = max(cur_mx, complement - a[i]);
        }
    }
    
    if(cur_mx > k) cout << 0 << nl;
    else cout << 1 << nl;
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