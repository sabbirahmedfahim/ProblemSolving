#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    vector<int> ans = {n};

    while (n != 1)
    {
        int who = -1;
        for (int i = 2; i * i <= n; i++)
        {
            if(n % i == 0) 
            {
                who = i; break;
            }
        }

        if(who == -1) 
        {
            ans.push_back(n - 1); n--;
        }
        else 
        {
            ans.push_back(n - who);
            n -= who;
        }
    }
    
    print(ans);

    map<int, int> freq;
    for (int i = 0; i < (int)ans.size() - 1; i++)
    {
        freq[ans[i] - ans[i + 1]]++;
    }
    
    for(auto [x, y] : freq)
    {
        if(y > 2)
        {
            cerr << x << nl;
            cerr << "issues" << nl;
        }
    }
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