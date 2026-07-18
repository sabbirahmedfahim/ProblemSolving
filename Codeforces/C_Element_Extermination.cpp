#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> a;

    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;

        if(a.empty()) a.push_back(data);
        else if(a.back() < data) 
        {
            if(a.size() == 1) a[0] = min(a[0], data);
            else a.back() = max(a.back(), data);
            
            while (a.size() >= 2)
            {
                int prev = a.back(); a.pop_back();
                if(a.back() < prev && a.size() == 1) a.back() = min(a.back(), prev);
                else if(a.back() < prev && a.size() > 1) a.back() = max(a.back(), prev);
                else
                {
                    a.push_back(prev); break;
                }
            }
            
        }
        else a.push_back(data);
    }
    
    if(is_sorted(all(a)))
    {
        cout << "YES" << nl;
    }
    else cout << "NO" << nl;
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