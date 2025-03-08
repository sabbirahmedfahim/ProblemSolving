// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> res(n);

    int l = 1, r = n;
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < n; j+=k)
        {
            if(i & 1) 
            {
                res[j] = r--;
            }
            else 
            {
                res[j] = l++;
            }
        }
    }

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