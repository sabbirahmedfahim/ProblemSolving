// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int firstOccuranceOf_1 = -1;
    for (int i = 0; i < n-2; i++)
    {
        if(s[i] == '1')
        {
            firstOccuranceOf_1 = i; 
            for (int j = firstOccuranceOf_1+1; j < n; j++) s[j] = '0';
            break;
        }
    }

    cout << s << nl;   
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

// wrong approach
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n; string s; cin >> n >> s;
//     for (int i = 0; i < n-2; i++)
//     {
//         if(s.substr(i, 3) > "100") 
//         {
//             s.erase(i, 3); s.insert(i, "100");
//         }
//     }
//     cout << s << nl;
// }
// int main()
// {
//     FAJR_BOOST()

//     int t; cin >> t; 
//     while (t--) solve();

//     return 0;
// }