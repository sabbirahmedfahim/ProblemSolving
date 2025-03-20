// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; deque<ll> a(n); for(auto &e : a) cin >> e;

    for(auto &e : a)
    {
        e = e%10;
    }

    deque<ll> b;
    map<ll, ll> mp;
    for(auto e : a) // reducing the array size, it will be max 10x3 = 30
    {
        if(mp.count(e) && mp[e] == 3) continue;

        b.push_back(e);
        mp[e]++;
    }
    // print(b);

    sort(all(b));

    for (int i = 0; i < b.size(); i++) // O(30 * 30)
    {
        for (int j = 0; j < b.size(); j++) // O(30)
        {
            if(i == j) continue;
            
            int tmp1 = b[i], tmp2 = b[j];
            deque<ll> arekta_dq = b;
            arekta_dq[i] = 0, arekta_dq[j] = 0;
            sort(all(arekta_dq));
            arekta_dq.pop_front();
            arekta_dq.pop_front();

            set<int> s = {3, 13, 23};
            for(auto e : s) // O(1)
            {
                int target = e - (tmp1 + tmp2);
                // cout << e << ' ' << tmp1 << ' ' << tmp2 << ' ' << target << nl;
                auto it = binary_search(all(arekta_dq), target);
                if(it == true)
                {
                    cout << "YES" << nl; return;
                }
            }

            // cout << nl;
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

