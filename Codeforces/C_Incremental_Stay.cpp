#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
a limit on the number of people who can stay in the museum simultaneously
*/
void solve()
{
    int n; cin >> n; n = 2 * n;
    deque<ll> a(n);
    for(auto &e : a) cin >> e; // array is sorted

    deque<ll> evenDiff, oddDiff;

    ll evenDiffSum = 0, oddDiffSum = 0;
    for (int i = 0; i < n; i += 2)
    {
        evenDiff.push_back(a[i + 1] - a[i]);
        // cerr << a[i] << " " << a[i + 1] << nl;
        evenDiffSum += a[i + 1] - a[i];
    }
    for (int i = 1; i < n - 1; i += 2)
    {
        oddDiff.push_back(a[i + 1] - a[i]);
        oddDiffSum += a[i + 1] - a[i];
    }
    // cout << evenDiff.size() << " " << oddDiff.size() << nl;

    // cerr << evenDiffSum << " e : o " << oddDiffSum << nl;

    // print(oddDiff);

    deque<ll> longPrefSum;

    deque<ll> b = a;
    ll curr_sum = 0;
    while (!b.empty())
    {
        curr_sum += b.back() - b.front();
        longPrefSum.push_back(curr_sum);

        b.pop_front(); b.pop_back();
    }

    // print(evenDiff); cout << nl;
    // print(oddDiff);
    // print(longPrefSum);

    vector<ll> res;
    res.push_back(evenDiffSum);
    evenDiffSum -= evenDiff.front(); evenDiff.pop_front();
    if(!evenDiff.empty()) 
    {
        evenDiffSum -= evenDiff.back(); evenDiff.pop_back();
    }
    // print(res);
    // return;

    for (int i = 1; i < n/2; i++) // +1 for before op
    {
        // cerr << i << " " << n / 2 << nl;

        ll curr_res = 0;
        
        if(i & 1)
        {
            curr_res += longPrefSum[i - 1];
            curr_res += oddDiffSum;

            if(!oddDiff.empty())
            {
                oddDiffSum -= oddDiff.front(); oddDiff.pop_front();
                if(!oddDiff.empty()) 
                {
                    oddDiffSum -= oddDiff.back(); oddDiff.pop_back();
                }
            }
        }
        else 
        {
            curr_res += longPrefSum[i - 1];
            curr_res += evenDiffSum;

            if(!evenDiff.empty())
            {
                evenDiffSum -= evenDiff.front(); evenDiff.pop_front();
                if(!evenDiff.empty()) 
                {
                    evenDiffSum -= evenDiff.back(); evenDiff.pop_back();
                }
            }
        }
        

        // cout << "#" << curr_res << nl;
        res.push_back(curr_res);
    }
    
    // cout << "what";

    print(res);
}
int_fast32_t main()
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