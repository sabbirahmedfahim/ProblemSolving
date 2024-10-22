
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n, x; cin >> n >> x; 
    //  complexity : O(n)
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
        if(x%i == 0 && x/i <= n) cnt++; // imagine, very easy
    }
    cout << cnt;

    return 0;
}

// Runtime error on test 6 [complexity O(n^2)]
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define input(v) for(auto &data : v) cin >> data
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;

// int main()
// {
//     FAJR_BOOST()

//     int n, x; cin >> n >> x; n++;
//     map<ll, ll> mp;
//     ll arr[n+1][n+1];

//     for (int i = 1; i <= n; i++)
//     {
//         int k = i;
//         for (int j = 1; j <= n; j++)
//         {
//             arr[i][j] = k;
//             k += i;
//             mp[arr[i][j]]++;
//         }
//     }

//     cout << mp[x];
    

//     return 0;
// }