// resolved (pattern finding problem)
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int dot = 0, times = 0, ans = 0;

    if(n & 1)
    {
        dot = 1;
        for (int i = 1; i <= n; i += 2)
        {
            dot++; times++;
        }
        
        ans = 2 * dot * times;
    }
    else
    {
        dot = 1, times = 1;
        for (int i = 2; i <= n; i += 2)
        {
            dot++; times++;
        }
        
        // ans = 2 * dot * times; // overlapping
        ans = dot * times; 
    }

    cout << ans << nl;

    return 0;
}
/*
https://www.youtube.com/watch?v=lvO8F6TmbEw
*/