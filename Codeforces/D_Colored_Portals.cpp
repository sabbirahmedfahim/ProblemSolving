#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<pair<char, char>> a(n);
    for(auto &e : a) cin >> e.first >> e.second;
    // for(auto [x, y] : a) cout << x << ' ' << y << nl; 

    map<pair<char, char>, set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[{a[i].first, a[i].second}].insert(i);
    }

    while (q--)
    {
        int x, y; cin >> x >> y; x--, y--;

        if(a[x].first == a[y].first || a[x].second == a[y].second) // it will handle apprx 16 cases
        {
            cout << abs(x - y) << nl; continue;
        }
        // cout << "others" << nl;

        int mx = 1E9;
        char c1 = a[x].first, c2 = a[x].second, c3 = a[y].first, c4 = a[y].second;


        if(c1 == 'B' && c2 == 'G') // BG
        {
            int ans = 1E9;
            if(c3 == 'G' && c4 == 'R') 
            {
                if(!mp.count({'B', 'R'})) ;
                else
                {
                    ans = abs(x - y); int toAdd = 1E9;
                    if(x < y)
                    {
                        auto it = mp[{'B', 'R'}].upper_bound(x);
                        if(it == mp[{'B', 'R'}].end())
                        {
                            auto it2 = mp[{'B', 'R'}].lower_bound(x);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < y) toAdd = 0;
                        else toAdd = (*it - y) * 2;
                    }
                    else
                    {
                        auto it = mp[{'B', 'R'}].upper_bound(y);
                        if(it == mp[{'B', 'R'}].end())
                        {
                            auto it2 = mp[{'B', 'R'}].lower_bound(y);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < x) toAdd = 0;
                        else toAdd = (*it - x) * 2;
                    }

                    ans = min(ans, abs(x - y) + toAdd);
                }
            }
            if(c3 == 'G' && c4 == 'Y')
            {
                if(!mp.count({'B', 'Y'}));
                else
                {
                    ans = abs(x - y); int toAdd = 1E9;
                    if(x < y)
                    {
                        auto it = mp[{'B', 'Y'}].upper_bound(x);
                        if(it == mp[{'B', 'Y'}].end())
                        {
                            auto it2 = mp[{'B', 'Y'}].lower_bound(x);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < y) toAdd = 0;
                        else toAdd = (*it - y) * 2;
                    }
                    else
                    {
                        auto it = mp[{'B', 'Y'}].upper_bound(y);
                        if(it == mp[{'B', 'Y'}].end())
                        {
                            auto it2 = mp[{'B', 'Y'}].lower_bound(y);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < x) toAdd = 0;
                        else toAdd = (*it - x) * 2;
                    }

                    ans = min(ans, abs(x - y) + toAdd);
                }
            }
            if(c3 == 'R' && c4 == 'Y')
            {
                if(!mp.count({'B', 'Y'}));
                else
                {
                    ans = abs(x - y); int toAdd = 1E9;
                    if(x < y)
                    {
                        auto it = mp[{'B', 'Y'}].upper_bound(x);
                        if(it == mp[{'B', 'Y'}].end())
                        {
                            auto it2 = mp[{'B', 'Y'}].lower_bound(x);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < y) toAdd = 0;
                        else toAdd = (*it - y) * 2;
                    }
                    else
                    {
                        auto it = mp[{'B', 'Y'}].upper_bound(y);
                        if(it == mp[{'B', 'Y'}].end())
                        {
                            auto it2 = mp[{'B', 'Y'}].lower_bound(y);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < x) toAdd = 0;
                        else toAdd = (*it - x) * 2;
                    }

                    ans = min(ans, abs(x - y) + toAdd);
                }

                if(ans == 1E9) ans = -1;
                cout << ans << nl;
            }
        }
        if(c1 == 'B' && c2 == 'R')
        {
            int ans = 1E9;
            if(c3 == 'G' && c4 == 'Y')
            {
                if(!mp.count({'B', 'Y'})) cout << -1 << nl;
                else
                {
                    ans = abs(x - y); int toAdd = 1E9;
                    if(x < y)
                    {
                        auto it = mp[{'B', 'Y'}].upper_bound(x);
                        if(it == mp[{'B', 'Y'}].end())
                        {
                            auto it2 = mp[{'B', 'Y'}].lower_bound(x);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < y) toAdd = 0;
                        else toAdd = (*it - y) * 2;
                    }

                    cout << abs(x - y) + toAdd << nl;
                }
            }
            if(c3 == 'R' && c4 == 'Y')
            {
                if(!mp.count({'B', 'Y'})) cout << -1 << nl;
                else
                {
                    ans = abs(x - y); int toAdd = 1E9;
                    if(x < y)
                    {
                        auto it = mp[{'B', 'Y'}].upper_bound(x);
                        if(it == mp[{'B', 'Y'}].end())
                        {
                            auto it2 = mp[{'B', 'Y'}].lower_bound(x);
                            it2--;
                            toAdd = *it2;
                        }
                        else if(*it < y) toAdd = 0;
                        else toAdd = (*it - y) * 2;
                    }

                    cout << abs(x - y) + toAdd << nl;
                }
            }
        }
        if(c1 == 'B' && c2 == 'Y')
        {
            int ans = 1E9;
            if(c3 == 'G' && c4 == 'R')
            {

            }
        }
        if(c1 == 'G' && c2 == 'R')
        {
            int ans = 1E9;
            if(c3 == 'B' && c4 == 'R')
            {

            }
        }
        if(c1 == 'G' && c2 == 'Y')
        {
            int ans = 1E9;
            if(c3 == 'B' && c4 == 'R')
            {

            }
        }
        if(c1 == 'R' && c2 == 'Y')
        {
            int ans = 1E9;
            if(c3 == 'B' && c4 == 'R')
            {

            }
        }
    }
    
    // for(auto [x, y] : a) cout << x << y << " ";
    // cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
/*
BG, BR, BY, GR, GY, or RY;

BG -> BR -> GR -> GY
BG -> BY
GR -> GY
RY ->

BG -> 
BR -> GR 
BY -> GY/RY

*/