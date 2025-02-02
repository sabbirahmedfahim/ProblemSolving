#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n = 5; vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        if(i == 3) continue;
        cin >> v[i];
    }

    // v[3] = v[1] + v[2];
    // for (int i = 1; i <= n; i++) cout << v[i] << " "; cout << nl;

    // int cnt = 0;
    // for (int i = 3; i <= n; i++)
    // {
    //     // if(v[i-2] > v[i-1]) break;

    //     if(v[i-2]+v[i-1] == v[i]) cnt++;
    //     else break;
    // }

    int cnt = 0, mx; 
    for (int i = -10000; i <= 10000; i++)
    {
        v[3] = i;
        mx = 0;
        for (int j = 3; j <= n; j++)
        {
            if(v[j-2]+v[j-1] == v[j]) mx++;
        }
        cnt = max(cnt, mx);
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << "TEST CASE-" << i << nl;
        solve();
    }
    

    return 0;
}