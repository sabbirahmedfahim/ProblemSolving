// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation: 
i. 1 is the common ans
ii. for every bit, k%bit should be divisible
*/
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    // vector<int> countBits;
    // for(auto data : v) countBits.push_back(__builtin_popcount(data));
    // sort(all(countBits));

    vector<int> countBits(30);
    for(auto data : v)
    {
        for (int k = 0; k < 30; k++)
        {
            if((data >> k) & 1) countBits[k]++;
            // else bits[k] = 0;
        }
    }

    vector<int> ans;
    for (int k = 1; k <= n; k++)
    {
        bool isMatch = true;
        for (int i = 0; i < 30; i++)
        {
            if(countBits[i]%k != 0) 
            {
                isMatch = false; break;
            }
        }
        if(isMatch) ans.push_back(k);
    }
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
