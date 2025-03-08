#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    // edge case
    bool isOne = true;
    for(auto e : v) 
    {
        if(e != 1) 
        {
            isOne = false;
        }
    }
    if(isOne)
    {
        cout << 1 << nl; return;
    }

    map<int, int> divisorsFreq;
    for (int i = 0; i < n; i++) // O(n * 316)
    {
        int data = v[i];
        for (int j = 2; j*j <= v[i]; j++)
        {
            // prime fact
            if(v[i]%j == 0) 
            {
                divisorsFreq[j]++;
                while (data%j == 0)
                {
                    data /= j;
                }
            }
        }
        if(data > 1) divisorsFreq[data]++;
    }

    int ans = 0;
    for(auto [key, val] : divisorsFreq) 
    {
        // cout << key << " -> " << val << nl; cout << nl;
        ans = max(ans, val);
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}