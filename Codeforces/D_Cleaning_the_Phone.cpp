#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    deque<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int sum = accumulate(all(a), 0ll);
    if(sum < k)
    {
        cout << -1 << nl; return;
    }
    // cout << "have answer" << nl;

    deque<int> x, y;
    for (int i = 0; i < n; i++)
    {
        if(b[i] == 1) x.push_back(a[i]);
        else y.push_back(a[i]);
    }
    
    if(x.size() > 0)
    {
        sort(all(x));
    }
    if(y.size() > 0)
    {
        sort(all(y));
    }

    int conveniencePoints = 0;
    while (k > 0)
    {
        if(!x.empty() && x.back() >= k)
        {
            conveniencePoints++; k = 0;
        }
        else if(!y.empty() && y.back() >= k)
        {
            conveniencePoints += 2; k = 0;
        }
        else if(x.size() >= 2 && y.size() > 0)
        {
            int prev = x.back();
            x.pop_back();
            if((prev + x.back()) > y.back())
            {
                k -= prev;
                conveniencePoints += 1;
                // x.pop_back();
            }
            else 
            {
                x.push_back(prev);
                k -= y.back(); 
                y.pop_back();
                conveniencePoints += 2;
            }
        }
        else if(x.size() == 1 && y.size() > 0)
        {
            if(y.back() > x.back()) 
            {
                k -= y.back(); conveniencePoints += 2;
                y.pop_back();
            }
            else 
            {
                k -= x.back(); conveniencePoints++;
                x.pop_back();
            }
        }
        else if(y.empty())
        {
            k -= x.back();
            x.pop_back();
            conveniencePoints++;
        }
        else if(x.empty())
        {
            k -= y.back();
            y.pop_back();
            conveniencePoints += 2;
        }
        else
        {
            cout << "someone is waiting..." << nl; 
            while (1)
            {
                ;
            }
            
        }
    }
    
    cout << conveniencePoints << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}