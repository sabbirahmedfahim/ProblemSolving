#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
 
    vector<int> ans;
    ans.push_back(1);
    string s = "";
    for (int i = 0; i < n; i++) s += 'o';
    
    int cnt = 1, currIdxWhereX = -1, currX = 0, xFromRight = 0;
    for (int i = 0; i < n - 1; i++)
    {
        a[i]--;
        s[a[i]] = 'x'; currX++;

        if(s.back() == '0') 
        {
            ans.push_back(currX + 1); continue;
        }

        if(currIdxWhereX == -1) currIdxWhereX = n - 1;

        while (currIdxWhereX >= 0 && s[currIdxWhereX] == 'x')
        {
            currIdxWhereX--; xFromRight++;
        }

        ans.push_back(currX - xFromRight + 1);
    }   
 
    ans.push_back(1);
 
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    // int n; cin >> n;
    // vector<int> a(n);
    // for(auto &e : a) cin >> e;

    // vector<int> ans;
    // ans.push_back(1);

    // string s = "";
    // for (int i = 0; i < n; i++) s += 'o';

    // for (int i = 0; i < n; i++)
    // {
    //     a[i]--;
    //     s[a[i]] = 'x';
    //     // cerr << s << nl;
        
    //     string curr = s;
    //     int cnt = 0;
    //     while (1)
    //     {
    //         bool touch = false;
    //         for (int j = 0; j < n - 1; j++)
    //         {
    //             if(curr[j] == 'x' && curr[j + 1] == 'o') 
    //             {
    //                 swap(curr[j], curr[j + 1]);
    //                 touch = true;
    //             }
    //         }
    //         cnt++;

    //         if(touch == false) break;
    //     }
    //     ans.push_back(cnt);
    // }

    // print(ans);
    

    return 0;
}