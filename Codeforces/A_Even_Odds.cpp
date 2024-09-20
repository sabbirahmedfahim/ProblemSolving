// TLE on test case 8
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(NULL);

//     ll n, k; cin >> n >> k;
//     ll pos = 1;
//     for (ll i = 1; i <= n; i+=2)
//     {
//         if(pos == k)
//         {
//             cout << i;
//             return 0;
//         }
//         pos++;
//     }
//     for (ll i = 2; i <= n; i+=2)
//     {
//         if(pos == k)
//         {
//             cout << i;
//             return 0;
//         }
//         pos++;
//     }

//     return 0;
// }

// Memory limit exceeded on test 8
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(NULL);

//     ll n, k;
//     cin >> n >> k;
//     vector<ll> v;
    

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
    ll n, k; cin >> n >> k;
    if(n%2 == 0)
    {
        ll oddIndex = n/2;
        if(k <= oddIndex)
        {
            cout << (k*2)-1;
        } 
        else
        {
            cout << (k-oddIndex)*2;
        }
    }
    else
    {
        ll oddIndex = (n/2)+1;
        if(k <= oddIndex)
        {
            cout << (k*2)-1;
        } 
        else
        {
            cout << (k-oddIndex)*2;
        }
    }
    

    return 0;
}