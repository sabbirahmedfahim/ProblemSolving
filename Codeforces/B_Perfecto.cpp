#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void brainStorming()
{
    set<ll> s;
    for (ll i = 1; i <= 5E5; i++)
    {
        ll x = sqrt(i); x *= x;
        // if(x == i) cout << i << ' ';
        if(x == i) s.insert(i);
    }
    // print(s);

    set<ll> jamela;
    
    // cout << nl << nl;
    // cout << s.size() << nl;

    ll pref = 0;
    for (ll i = 1; i <= 5E6; i++)
    {
        if(i == 1) pref += 2;
        else if(i == 2) pref += 1;

        else if(i == 9) pref += 8;
        else if(i == 8) pref += 9;

        else if(i == 50) pref += 49;
        else if(i == 49) pref += 50;

        else if(i == 288) pref += 289;
        else if(i == 289) pref += 288;

        else if(i == 1681) pref += 1682;
        else if(i == 1682) pref += 1681;

        else pref += i;
        // cout << pref << ' ';
        // if(s.count(pref)) cout << pref << " -> " << i << nl;
        if(s.count(pref)) jamela.insert(i);
    }

    print(jamela);
}
/*
1
8
49
288
1681
9800
57121
332928
*/
void solve()
{
    set<ll> s = {1, 8, 49, 288, 1681, 9800, 57121, 332928}; // maybe a small correction is required
    int n; cin >> n;
    if(s.count(n)) cout << -1 << nl;
    else 
    {
        for (ll i = 1; i <= n; i++)
        {
            if(i == 1) cout << 2 << ' ';
            else if(i == 2) cout << 1 << ' ';

            else if(i == 9) cout << 8 << ' ';
            else if(i == 8) cout << 9 << ' ';

            else if(i == 50) cout << 49 << ' ';
            else if(i == 49) cout << 50 << ' ';

            else if(i == 289) cout << 288 << ' ';
            else if(i == 288) cout << 289 << ' ';

            else if(i == 1681) cout << 1682 << ' ';
            else if(i == 1682) cout << 1681 << ' ';

            else if(i == 9800) cout << 9801 << ' ';
            else if(i == 9801) cout << 9800 << ' ';

            else if(i == 57121) cout << 57122 << ' ';
            else if(i == 57122) cout << 57121 << ' ';

            else if(i == 332928) cout << 332929 << ' ';
            else if(i == 332929) cout << 332928 << ' ';

            else cout << i << ' ';
        }
        cout << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // brainStorming();

    int t = 1; 
    cin >> t;
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

//     int cnt = 0;
//     for (ll i = 1; i <= 5E5; i++)
//     {
//         ll x = (i * (i+1)) / 2;
//         ll y = sqrt(x);
//         y *= y;
//         if(x == y) cout << i << nl;
//     }
//     cout << cnt << nl;

//     return 0;
// }