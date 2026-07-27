#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    set<int> posOfOnes, posOfZeros;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') posOfOnes.insert(i);
        else posOfZeros.insert(i);
    }
    // print(posOfOnes); 
    // print(posOfZeros);
    
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = 0;
        if(s[i] == '1')
        {   
            auto it = posOfZeros.lower_bound(i);
            
            if(it != posOfZeros.begin())
            {
                it--;

                curr += *it + 1;
                // cerr << *it << ' ' << i  << " = " << curr << nl;
                posOfZeros.erase(it);
                posOfOnes.erase(i);
            }

            ans += curr;
        }
    }
    
    vector<int> vec;
    for(auto e : posOfOnes) vec.push_back(e);
    for(auto e : posOfZeros) ans += e + 1;

    for (int i = 0; i < vec.size()/2 + (vec.size() & 1); i++)
    {
        ans += vec[i] + 1;
    }
    cout << ans << nl;
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