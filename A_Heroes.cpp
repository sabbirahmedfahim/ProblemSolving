#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    cin.ignore();

    map<string, vector<string>> mp;
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        string s; getline(cin, s);

        stringstream ss(s);
        string word;
        string a,b,c;
        while (ss >> word)
        {
            // cout << word << nl;
            if(a.empty()) a = word;
            else if(b.empty()) b = word;
            else c = word;
        }
        
        mp[a].push_back(c);
        mp[c].push_back(a);
        // cout << s << nl;
        ans2 = max(ans2, max((int)mp[a].size() + 1, (int)mp[c].size() + 1));
    }
    for(auto e : mp)
    {
        // cout << e.first << " : ";
        // print(e.second);
    }
    
    vector<int> a(3);
    for(auto &e : a) cin >> e;
    sort(all(a));

    vector<tuple<int, int, int>> ans;
    ans.push_back({a[0]/2ll, a[1]/2ll, a[2]/3ll});
    ans.push_back({a[0]/1ll, a[1]/2ll, a[2]/4ll});
    ans.push_back({a[0]/1ll, a[1]/3ll, a[2]/3ll});
    ans.push_back({a[0]/1ll, a[1]/1ll, a[2]/5ll});
    
    int mn = 1E18;
    for (int i = 0; i < ans.size(); i++)
    {
        auto [x, y, z] = ans[i];
        vector<int> curr = {x, y, z}; sort(all(curr));

        mn = min(mn, curr.back() - curr.front());
    }
    cout << mn << " " << ans2 << nl;


    // for (int a = 0; a <= 7; a++)
    // {
    //     for (int b = a; b <= 7; b++)
    //     {
    //         for (int c = b; c <= 7; c++)
    //         {
    //             for (int d = c; d <= 7; d++)
    //             {
    //                 for (int e = d; e <= 7; e++)
    //                 {
    //                     for (int f = e; f <= 7; f++)
    //                     {
    //                         for (int g = f; g <= 7; g++)
    //                         {
    //                             int sum = a + b + c + d + e + f + g;
    //                             if(sum != 7) continue;

    //                             cout << a << "," << b << "," << c << "," << d << "," << e << ",";
    //                             cout << f << "," << g << nl;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    

    return 0;
}