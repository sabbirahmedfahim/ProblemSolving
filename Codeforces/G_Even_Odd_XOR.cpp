// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int XOR = 0;
    for (int i = 1; i <= n-3; i++)
    {
        cout << i << " ";
        XOR ^= i;
    }
    int x = (1<<29); // (think, it's easy)
    int y = (1<<30); // (think, it's easy)
    XOR ^= x;
    XOR ^= y;

    cout << x << " " << y << " " << XOR << nl;
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

// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define all(c) c.begin(),c.end()
// #define print(c) for(auto e : c) cout << e << " "; cout << nl
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int x = 0, b = 0, c = 0;
//     for (int i = 0; i <= 8-2; i++)
//     {
//         // cout << i << nl;
//         // if(i & 1) b ^= i;
//         // else x ^= i;

//         c ^= i;
//     }
//     // cout << x << nl; // ok
//     // cout << b << nl; // ok
//     // cout <<  x^b) << nl; // ok

//     cout << c << nl; // ok
//     int x = (1<<30);
//     cout << x << nl;
//     cout << (c^x) << nl;

//     return 0;
// }