/* This statement is a textbook example of why reading comprehension is necessary */
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int lineNum, n, m; cin >> lineNum >> n >> m;
    deque<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    vector<int> res;

    while (!a.empty() || !b.empty())
    {
        if(!a.empty() && !b.empty())
        {
            if(a.front() == 0) res.push_back(a.front()), a.pop_front(), lineNum++;
            else if(b.front() == 0) res.push_back(b.front()), b.pop_front(), lineNum++;
            else if(a.front() <= b.front()) 
            {
                if(a.front() <= lineNum) res.push_back(a.front()), a.pop_front();
                else 
                {
                    cout << -1 << nl; return;
                }
            }
            else 
            {
                if(b.front() <= lineNum) res.push_back(b.front()), b.pop_front();
                else 
                {
                    cout << -1 << nl; return;
                }
            }
        }
        else if(!a.empty())
        {
            if(a.front() == 0) res.push_back(a.front()), a.pop_front(), lineNum++;
            else if(a.front() <= lineNum) res.push_back(a.front()), a.pop_front();
            else
            {
                cout << -1 << nl; return;
            }
        }
        else 
        {
            if(b.front() == 0) res.push_back(b.front()), b.pop_front(), lineNum++;
            else if(b.front() <= lineNum) res.push_back(b.front()), b.pop_front();
            else
            {
                cout << -1 << nl; return;
            }
        }
    }
    
    // cout << "Ok" << nl;
    print(res);
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