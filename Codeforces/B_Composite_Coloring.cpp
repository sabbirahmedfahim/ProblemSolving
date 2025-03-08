#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> v(n); // vi <= 1000 which is a hints
    for(auto &e : v) cin >> e;

    map<int, int> colour;
    int whichColour = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j*j <= v[i]; j++)
        {
            if(v[i]%j == 0)
            {
                if(colour.count(j))
                {
                    ans.push_back(colour[j]);
                }
                else
                {
                    whichColour++;
                    ans.push_back(whichColour);
                    colour[j] = whichColour;
                }
                break;
            }
        }
    }

    cout << whichColour << nl;
    print(ans);
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