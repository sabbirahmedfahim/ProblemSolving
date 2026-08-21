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

    int sum = accumulate(all(a), 0);

    int ans = 0;

    if(sum & 1)
    {
        bool who = true; 
        while (accumulate(all(a), 0) > 0)
        {
            if(who)
            {
                for(auto &e : a)
                {
                    if(e >= 2) 
                    {
                        if(e % 2 == 0) 
                        {
                            e = 0;
                        }
                        else 
                        {
                            e = 1;
                        }
                    }
                }
                for(auto &e : a)
                {
                    if(e == 1)
                    {
                        e = 0; break;
                    }
                }
            }
            else
            {
                for(auto &e : a)
                {
                    if(e >= 2) 
                    {
                        if(e % 2 == 0) 
                        {
                            ans += e; e = 0;
                        }
                        else 
                        {
                            ans += e - 1; e = 1;
                        }
                    }
                }
                for(auto &e : a)
                {
                    if(e == 1)
                    {
                        ans++;
                        e = 0; break;
                    }
                }
            }


            who = !who;
        }
    }
    else
    {
        bool who = false;
        while (accumulate(all(a), 0) > 0)
        {
            if(who)
            {
                for(auto &e : a)
                {
                    if(e >= 2) 
                    {
                        if(e % 2 == 0) 
                        {
                            e = 0;
                        }
                        else 
                        {
                            e = 1;
                        }
                    }
                }
                for(auto &e : a)
                {
                    if(e == 1)
                    {
                        e = 0; break;
                    }
                }
            }
            else
            {
                for(auto &e : a)
                {
                    if(e >= 2) 
                    {
                        if(e % 2 == 0) 
                        {
                            ans += e; e = 0;
                        }
                        else 
                        {
                            ans += e - 1; e = 1;
                        }
                    }
                }
                for(auto &e : a)
                {
                    if(e == 1)
                    {
                        ans ++;
                        e = 0; break;
                    }
                }
            }

            who = !who;
        }
    }

    cout << ans << nl;
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