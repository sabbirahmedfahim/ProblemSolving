#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;

    /*
    1 -> 10 times
    2 -> 5 times
    3 -> 10 times
    4 -> 5 times
    5 -> two times
    6 -> 5 times
    7 -> 10 times
    8 -> 5 times
    9 -> 10 times
    0 -> as many as possible
    */

    int nLeftMostNonZero = 0;
    int tmp = n;
    while (tmp)
    {
        nLeftMostNonZero = tmp % 10;
        if(nLeftMostNonZero) break;
        
        tmp /= 10;
    }
    int tmp2 = k, kLeftMostNonZero = 0, koybar = 0;
    while (tmp2)
    {
        kLeftMostNonZero = tmp2 % 10;
        // if(kLeftMostNonZero) break;

        koybar++;
        tmp2 /= 10;
    }
    koybar--;


    if(nLeftMostNonZero % 10 == 1 || nLeftMostNonZero % 10 == 3 || nLeftMostNonZero % 10 == 7 || nLeftMostNonZero % 10 == 9)
    {
        if(k >= 10) // 1 times
        {
            while (k % 10 != 0) k--;
        }
        else if(k >= 5) // two times
        {
            while (k % 5 != 0) k--;
        }
        else if(k >= 6) // five times
        {
            while (k % 6 != 0) k--;
        }
        else if(k >= 4) // five times
        {
            while (k % 4 != 0) k--;
        }
        else if(k >= 2) // five times
        {
            while (k % 2 != 0) k--;
        }
    }
    if(nLeftMostNonZero == 2 || nLeftMostNonZero == 4 || nLeftMostNonZero == 6 || nLeftMostNonZero == 8)
    {
        cerr << kLeftMostNonZero << nl;
        if(kLeftMostNonZero >= 5)
        {
            while (kLeftMostNonZero % 5 != 0) kLeftMostNonZero--;
        }
        for (int i = 0; i < koybar; i++)
        {
            kLeftMostNonZero *= 10;
        }
        
    }
    if(nLeftMostNonZero == 5)
    {
        if(kLeftMostNonZero >= 5)
        {
            while (kLeftMostNonZero % 5 != 0) kLeftMostNonZero--;
        }
        else if(k >= 2)
        {
            while (kLeftMostNonZero % 2 != 0) kLeftMostNonZero--;
        }
        for (int i = 0; i < koybar; i++)
        {
            kLeftMostNonZero *= 10;
        }
    }

    // for (int i = 0; i < tot; i++)
    // {
    //     last *= 10;
    // }

    cerr << n << " <---> " << kLeftMostNonZero << nl;
    // cout << last << nl;
    // last += tmp;

    cout << n * kLeftMostNonZero << nl;
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