#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    b = a;

    for (int i = n - 2; i >= 0; i--)
    {
        a[i] = min(a[i + 1], a[i]);
    }
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        score += b[i] - a[i];
    }
    
    // print(a);
    int extraScore = 0;
    for (int i = 0; i < n; )
    {
        int X = i, currScore = 0;
        while (X + 1 < n && a[X + 1] == a[i])
        {
            currScore++;
            X++;
        }
        
        extraScore = max(extraScore, currScore);
        if(i == X) i++;
        else i = X + 1;
    }

    if(!is_sorted(all(b)) && extraScore == 0)
    {
        while (1)
        {
            ; // dbg...
        }
        
    }
    
    cout << score + extraScore << nl;
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