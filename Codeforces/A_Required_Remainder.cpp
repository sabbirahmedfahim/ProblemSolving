// my attempt (wrong ans on test case 2)
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll x, y, n;
//         cin >> x >> y >> n;
//         ll k = 0;
//         ll ans = 0;
//         while (k <= n)
//         {
//             if(x*(k+1) + y > n) break;
//             ans = x*(k+1) + y;
//             k++;
//         }
//         cout << ans << nl;
//     }

//     return 0;
// }

// youtube
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        ll p = (n-y)/x;
        ll k = p*x+y;
        cout << k << nl;
    }

    return 0;
}
