#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve() // O(n.logN)
{
    int n, q; cin >> n >> q;  
    vector<ll> v(n), vRev(n);
    for(auto &data : v) cin >> data;
    vRev = v; reverse(vRev.begin(), vRev.end());

    map<ll, ll> mp, mpRev;
    for (int i = 0; i < n; i++)
    {
        if(!mp.count(v[i])) mp[v[i]] = i;
        if(!mpRev.count(vRev[i])) mpRev[vRev[i]] = n - 1 - i;
    }
    // for(auto [key, val] : mp) cout << key << " " << val << nl;
    // cout << nl;
    // for(auto [key, val] : mpRev) cout << key << " " << val << nl;
    // cout << nl;

    while (q--) // O(n.logN)
    {
        ll a, b; cin >> a >> b;

        if(mp.count(a) && mpRev.count(b) && mp[a] < mpRev[b]) // O(logN)
        {
            // cout << mp[a] << " " << mpRev[b] << nl;
            cout << "YES" << nl;
        }
        else cout << "NO" << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve(); // O(n².logN)

    return 0;
}

// TLE on 3rd test case
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n, q; cin >> n >> q;  
//     vector<ll> v(n), vRev(n);
//     for(auto &data : v) cin >> data;
//     vRev = v; reverse(vRev.begin(), vRev.end());
//     while (q--)
//     {
//         ll a, b; cin >> a >> b;
//         auto it1 = find(v.begin(), v.end(), a);
//         // auto it2 = find(v.begin(), v.end(), b);
//         auto it3 = find(vRev.begin(), vRev.end(), b);

//         if(it1 != v.end() && it3 != vRev.end()) 
//         {
//             int startingPoint = it1 - v.begin();
//             // int it2_pos = it2 - v.begin();
//             int it3_pos = it3 - vRev.begin();
//             // cout << startingPoint << " " << n - 1 - it3_pos << nl;
//             if(startingPoint < n - 1 - it3_pos) cout << "YES" << nl;
//             else cout << "NO" << nl;
//         }
//         else cout << "NO" << nl;
//     }
// }
// int main()
// {
//     FAJR_BOOST()

//     int t; cin >> t; 
//     while (t--) solve();

//     return 0;
// }