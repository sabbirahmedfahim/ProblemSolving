#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> mp;
    int prev = 0, prevSum = 0;
    for (int i = 0; i < n; i++)
    {
        mp[i] = a[i];
        prevSum += a[i];
    }
    
    while (q--)
    {
        int type; cin >> type;
        if(type == 2)
        {
            mp.clear();
            int data; cin >> data;
            prev = data;

            cout << n * data << nl;
            prevSum = n * data;
        }
        else 
        {
            int idx, data; cin >> idx >> data;
            idx--;
            int currSum;
            if(mp.count(idx))
            {
                currSum = prevSum - mp[idx] + data;
            }
            else 
            {
                currSum = prevSum - prev + data;
            }
            prevSum = currSum;
            mp[idx] = data;

            cout << prevSum << nl;
        }
    }
    
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}