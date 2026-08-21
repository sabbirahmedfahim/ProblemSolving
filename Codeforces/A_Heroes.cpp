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

    map<string, set<string>> mp;
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
        
        mp[a].insert(c);
        // mp[c].insert(a);
    }
    // for(auto e : mp)
    // {
    //     cout << e.first << " : ";
    //     print(e.second);
    // }
    
    vector<int> a(3);
    for(auto &e : a) cin >> e;
    sort(all(a));

    vector<tuple<int, int, int>> ans;
    ans.push_back({a[0]/2ll, a[1]/2ll, a[2]/3ll});
    ans.push_back({a[0]/1ll, a[1]/2ll, a[2]/4ll});
    ans.push_back({a[0]/1ll, a[1]/3ll, a[2]/3ll});
    ans.push_back({a[0]/1ll, a[1]/1ll, a[2]/5ll});
    // ans.push_back({a[0]/0ll, a[1]/0ll, a[2]/7ll});
    
    int mn = 1E18, fromWho = -1;
    for (int i = 0; i < ans.size(); i++)
    {
        auto [x, y, z] = ans[i];
        vector<int> curr = {x, y, z}; sort(all(curr));

        if(mn >= curr.back() - curr.front()) 
        {
            mn = curr.back() - curr.front();
            fromWho = i;
        }
    }

    int mxInGroup = 0;
    if(fromWho == 0) mxInGroup = 3;
    if(fromWho == 1) mxInGroup = 4;
    if(fromWho == 2) mxInGroup = 4;
    if(fromWho == 3) mxInGroup = 5;
    cerr << mxInGroup << nl;

    // cout << mn << " " << ans2 << nl;

    map<int, string> heros;
    heros[1] = "Anka";
    heros[2] = "Chapay";
    heros[3] = "Cleo";
    heros[4] = "Troll";
    heros[5] = "Dracul";
    heros[6] = "Snowy";
    heros[7] = "Hexadecimal";

    int cnt = 0, mx = 0;
    for (int a = 1; a <= 7; a++)
    {
        for (int b = a + 1; b <= 7; b++)
        {
            for (int c = b + 1; c <= 7; c++)
            {
                // cnt++;
                if(mxInGroup == 3)
                {
                    // cerr << a << ' ' << b << ' ' << c << nl;
                    // int curr = mp[heros[a]].size() + mp[heros[b]].size() + mp[heros[c]].size();
                    int curr = 0;
                    set<string> st = mp[heros[a]];
                    for(auto e : st) if(e == heros[b] || e == heros[c]) curr++;
                    st = mp[heros[b]];
                    for(auto e : st) if(e == heros[a] || e == heros[c]) curr++;
                    st = mp[heros[c]];
                    for(auto e : st) if(e == heros[a] || e == heros[b]) curr++;
                    mx = max(curr, mx);
                }
                for (int d = c + 1; d <= 7; d++)
                {
                    // cnt++;
                    if(mxInGroup == 4)
                    {
                        // cerr << a << ' ' << b << ' ' << c << ' ' << d << nl;
                        // int curr = mp[heros[a]].size() + mp[heros[b]].size() + mp[heros[c]].size() + mp[heros[d]].size();
                        int curr = 0;
                        set<string> st = mp[heros[a]];
                        for(auto e : st) if(e == heros[b] || e == heros[c] || e == heros[d]) curr++;
                        st = mp[heros[b]];
                        for(auto e : st) if(e == heros[a] || e == heros[c] || e == heros[d]) curr++;
                        st = mp[heros[c]];
                        for(auto e : st) if(e == heros[a] || e == heros[b] || e == heros[d]) curr++;
                        st = mp[heros[d]];
                        for(auto e : st) if(e == heros[a] || e == heros[b] || e == heros[c]) curr++;
                        mx = max(curr, mx);
                    }
                    for (int e = d + 1; e <= 7; e++)
                    {
                        // cnt++;
                        if(mxInGroup == 5)
                        {
                            // int curr = mp[heros[a]].size() + mp[heros[b]].size() + mp[heros[c]].size() + mp[heros[d]].size() + mp[heros[e]].size();
                            int curr = 0;
                            set<string> st = mp[heros[a]];
                            for(auto E : st) if(E == heros[b] || E == heros[c] || E == heros[d] || E == heros[e]) curr++;
                            st = mp[heros[b]];
                            for(auto E : st) if(E == heros[a] || E == heros[c] || E == heros[d] || E == heros[e]) curr++;
                            st = mp[heros[c]];
                            for(auto E : st) if(E == heros[a] || E == heros[b] || E == heros[d] || E == heros[e]) curr++;
                            st = mp[heros[d]];
                            for(auto E : st) if(E == heros[a] || E == heros[b] || E == heros[c] || E == heros[e]) curr++;
                            st = mp[heros[e]];
                            for(auto E : st) if(E == heros[a] || E == heros[b] || E == heros[c] || E == heros[d]) curr++;
                            mx = max(curr, mx);
                            // cerr << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << nl;
                        }
                        for (int f = e; f <= 7; f++)
                        {
                            for (int g = f; g <= 7; g++)
                            {
                                // int sum = a + b + c + d + e + f + g;
                                // if(sum != 7) continue;

                                // cout << a << "," << b << "," << c << "," << d << "," << e << ",";
                                // cout << f << "," << g << nl;
                            }
                        }
                    }
                }
            }
        }
    }


    cout << mn << ' ' << mx << nl;

    return 0;
}