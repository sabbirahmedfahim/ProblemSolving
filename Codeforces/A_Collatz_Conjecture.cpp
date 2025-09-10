#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int k, x; cin >> k >> x;

    for (int i = 1E5; ; i--)
    {
        int curr = i;
        for (int j = 0; j < k; j++)
        {
            if(curr & 1) 
            {
                curr = curr * 3 + 1;
            }
            else curr /= 2;
        }

        if(curr == x) 
        {
            cout << i << nl; return;
        }
    }
    
    while (true)
    {
        ;
    }
    
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

// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long
// #define all(c) c.begin(),c.end()
// #define print(c) for(auto e : c) cout << e << " "; cout << nl
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int x = 21;
//     for (int i = 0; i < 5; i++)
//     {
//         if(x & 1) x = x * 3 + 1;
//         else x /= 2;
//     }
//     cerr << x << nl;

//     return 0;
// }