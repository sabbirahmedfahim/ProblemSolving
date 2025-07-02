#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b; cin >> a >> b;

    if(b%a == 0) cout << "Yes" << nl;
    else cout << "No" << nl;
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
// #define ll long long
// #define all(c) c.begin(),c.end()
// #define print(c) for(auto e : c) cout << e << " "; cout << nl
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int n; cin >> n;

//     for (int i = 1919; i <= n; i++)
//     {
//         int odd = 0, even = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             if(i % j == 0)
//             {
//                 if(j & 1) odd++;
//                 else even++;
//             }
//         }
        
//         cout << i << " : " << odd << " - " << even << nl;
//     }
    

//     return 0;
// }