// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    string s;
    cin >> s;
/*
{0,1,2,3,4,5,6,7,8,9,A,b,C,d,E,F}

   Characters that remain the same after 180-degree rotation    -> 0, 1, 2, 5, 8

Strobogrammatic pairs with similarity after 180-degree rotation -> 3 <-> E, 6 <-> 9

            Non-strobogrammatic characters                      -> 4, 5, 7, A, b, C, d, F    
*/
    map<char, char> mp = {{'0', '0'}, {'1', '1'}, {'2','2'}, {'5','5'}, {'8', '8'}, 
    {'3','E'}, {'E','3'}, {'6','9'},{'9','6'}};  
    
    int cnt = 0;
    int len = s.size();

    // for(auto [key, val] : mp) cout << key << " " << val << nl;
    
    for (int i = 0; i < len / 2; i++) 
    {
        char l = s[i];
        char r = s[len - 1 - i]; // r is character
        // cout << l << " - " << r << nl;
        if (!mp.count(l) && !mp.count(r)) cnt+=2;
        else if (mp.count(l) && mp.count(r) && mp[l]==s[len-i-1]) ;
        else if(mp.count(l) || mp.count(r)) cnt++;
    }

    if(len%2 && mp[s[len/2]] != s[len/2]) cnt++;
    
    cout << cnt << endl;

    return 0;
}


// my approach [WA on 4th tc]
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     string s; cin >> s;

//     int cnt = 0;
//     int cnt_6 = 0, cnt_9 = 0, cnt_3 = 0, cnt_E = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         // {5,7,A,C,d,F}
//         if(s[i] == '7' || s[i] == 'A' || s[i] == 'C' 
//         || s[i] == 'd' || s[i] == 'F' || s[i] == '4' || s[i] == 'b') cnt++;
//         else if(s[i] == '6') cnt_6++; 
//         else if(s[i] == '9') cnt_9++;
//         else if(s[i] == '3') cnt_3++; 
//         else if(s[i] == 'E') cnt_E++;
//     }
//     int _3_E_laghbe = abs(cnt_3-cnt_E);
//     int _6_9_laghbe = abs(cnt_6-cnt_9);
    
//     cout << cnt + _3_E_laghbe + _6_9_laghbe << endl;

//     return 0;
// }