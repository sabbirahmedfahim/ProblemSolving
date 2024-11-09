#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; char ch; string s; cin >> n >> ch >> s;
    int cnt = 0;
    s += s;
    int mx = 0;
    bool cntKorbeNaki = false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ch) 
        {
            cnt++; cntKorbeNaki = true;
            continue;
        }
        else if(s[i] == 'g')
        {
            mx = max(mx, cnt); cnt = 0; cntKorbeNaki = false;
        }
        if(cntKorbeNaki) cnt++;
    }
    
    cout << mx << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

// TLE on 5-th test case
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n; char ch; string s; cin >> n >> ch >> s;
//     int cnt = 0;
//     s += s;
//     int mx = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         int cnt = 0;
//         if(s[i] == ch && s.size() - i - 1 > mx)
//         {
//             for (int j = i; j < s.size(); j++)
//             {
//                 if(s[j] == 'g')
//                 {
//                     mx = max(mx, cnt);
//                     break;
//                 }
//                 cnt++;
//             }
//         }
//     }
//     cout << mx << nl;
// }
// int main()
// {
//     iOS

//     int t; cin >> t; 
//     while (t--) solve();

//     return 0;
// }