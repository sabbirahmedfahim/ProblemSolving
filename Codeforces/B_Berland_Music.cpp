#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    string s; cin >> s;

    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') mp1[v[i]] = i;
        else mp2[v[i]] = i;
    }

    int one_to_n = 1;
    for(auto [key, val] : mp1) 
    {
        mp1[key] = one_to_n; 
        one_to_n++;
    }
    for(auto [key, val] : mp2)  mp2[key] = one_to_n++;

    // for(auto [key, val] : mp1) cout << key << " " << val << nl;
    // cout << nl;
    // for(auto [key, val] : mp2) cout << key << " " << val << nl;
    // cout << nl << nl;

    for (int i = 0; i < n; i++)
    {
        if(mp1.count(v[i])) v[i] = mp1[v[i]];

        else if(mp2.count(v[i])) v[i] = mp2[v[i]];
    }
    print(v);
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n; cin >> n;
//     vector<int> v(n);
//     for(auto &data : v) cin >> data;
//     string s; cin >> s;

//     int oneToN = 1, NToOne = n;
//     set<int> zero, one;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i] == '0') zero.insert(i);
//         else one.insert(i);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(one.count(i)) 
//         {
//             v[i] = NToOne; NToOne--;
//             one.erase(i);
//         }
//         else if(zero.count(i))
//         {
//             v[i] = oneToN; oneToN++;
//             zero.erase(i);
//         }
//     }
//     print(v);
// }
// int main()
// {
//     iOS

//     int t; cin >> t; 
//     while (t--) solve();

//     return 0;
// }

