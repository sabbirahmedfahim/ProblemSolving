#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            a[i + 1] += a[i];
            a[i] = a[i + 1];
        }
    }
    
    // print(a);
    if(is_sorted(all(a))) cout << a.back() << nl;
    else 
    {
        while (1)
        {
            ;
        }
        
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
/*
   3 2 1
-> 2 5 1
-> 2 1 6
-> 1 3 6

   2 2 1 3 3
-> 

   3 1 4 2
-> 
*/