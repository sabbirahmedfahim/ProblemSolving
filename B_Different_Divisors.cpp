#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isMatch(vector<int> div, int dist)
{
    for (int i = 0; i < div.size()-1; i++)
    {
        if(div[i + 1] - div[i] < dist) return false;
    }
    return true;
}
void solve()
{
    int dist; cin >> dist;

    if(dist == 1) 
    {
        cout << 6 << nl; return;
    }

    for (int i = 1; i <= 10000; i += 2)
    {
        vector<int> divisors;
        for (int j = 1; j <= i; j++)
        {
            if(i%j == 0) divisors.push_back(j);
            
            if(divisors.size() == 4) break;
        }

        if(divisors.size() == 4 && isMatch(divisors, dist))
        {
            cout << i << nl; return; 
        }
    }
    
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