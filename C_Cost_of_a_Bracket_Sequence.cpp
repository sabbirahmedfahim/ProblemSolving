#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int currL = 0;
    vector<int> res;

    bool who = true;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '(') 
        {
            if(who == false) currL = 0;
            who = true;
            currL++;

            res.push_back(0);
        }
        else 
        {
            if(currL && k)
            {
                // res.push_back(1);
                if(currL == 1) 
                {
                    res.back() = 1;
                    res.push_back(0);
                }
                else res.push_back(1);

                k--;
                currL--;
            }
            else res.push_back(0);

            who = false;
        }
    }
    
    for(auto e : res) cout << e;
    cout << nl;
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