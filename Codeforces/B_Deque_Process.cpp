#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> a(n);
    for(auto &e : a) cin >> e;

    bool choto = true;
    string s;
    while (!a.empty())
    {
        if(choto)
        {
            int curr = -1;
            for (int i = 0; i < 2 && !a.empty(); i++)
            {
                if(a.front() <= a.back())
                {
                    if(curr == -1)
                    {
                        curr = a.front(); s += 'L';
                        a.pop_front(); continue;
                    }
                    if(curr < a.front()) break;
                    else 
                    {
                        curr = a.front(); a.pop_front();
                        s += 'L';
                    }
                }
                else 
                {
                    if(curr == -1)
                    {
                        curr = a.back(); s += 'R';
                        a.pop_back(); continue;
                    }
                    if(curr < a.back()) break;
                    else 
                    {
                        curr = a.back(); a.pop_back();
                        s += 'R';
                    }
                }
            }
        }
        else 
        {
            int curr = -1;
            for (int i = 0; i < 2 && !a.empty(); i++)
            {
                if(a.front() >= a.back())
                {
                    if(curr == -1)
                    {
                        curr = a.front(); s += 'L';
                        a.pop_front(); continue;
                    }
                    if(curr < a.front()) break;
                    else 
                    {
                        curr = a.front(); a.pop_front(); 
                        s += 'L';
                    }
                }
                else 
                {
                    if(curr == -1)
                    {
                        curr = a.back(); s += 'R';
                        a.pop_back(); continue;
                    }
                    if(curr < a.back()) break;
                    else 
                    {
                        curr = a.back(); a.pop_back();
                        s += 'R';
                    }
                }
            }
        }
        choto = !choto;
    }
    
    cout << s << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}