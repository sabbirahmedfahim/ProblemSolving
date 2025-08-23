// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int fact(int n)
{
    if(n == 0 || n == 1) return 1;

    return n * fact(n - 1);
}
void tryNextPermutation()
{
    vector<int> a = {1, 2, 3, 4};

    int cse = 1, cnt = 0;

    cerr << "case-" << cse++ << " : " << nl;
    for(auto e : a) cerr << e << " "; cerr << nl;
    
    while (next_permutation(all(a)))
    {
        cerr << "case-" << cse++ << " : " << nl;
        // print(a);
        
        bool found = true;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if((a[i] + a[i + 1]) % 3 == 0)
            {
                found = false; break;
            }
        }
        
        if(found) 
        {
            // for(auto e : a) cerr << e << " "; cerr << nl;
            cnt++;
        }
        else 
        {
            for(auto e : a) cerr << e << " "; cerr << nl;
        }
    }

    cerr << nl << cnt << nl;
}
void solve()
{
    int n, k; cin >> n >> k;

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int curr = 1;
        while ((curr + i) % 3 != 0) curr++;

        while(curr <= n) 
        {
            if(curr == i) break;

            cerr << i << " : " << curr << nl;
            int added = (n - 1);
            if(n > 3) added += fact(n - 2);

            cout << added << nl;

            curr += 3;
        }
    }
    
    // cout << res << nl;
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
    // tryNextPermutation();

    return 0;
}
