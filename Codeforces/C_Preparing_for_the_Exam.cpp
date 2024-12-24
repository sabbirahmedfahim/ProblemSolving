#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, k; cin >> n >> m >> k; vector<int> a(m), b(k);
    for(auto &data : a) cin >> data; for(auto &data : b) cin >> data;

    map<int, int> mp;
    for(auto data : b) mp[data]++;
    bool is_found = true;
    // for (int i = 0; i < m; i++)
    // {
    //     is_found = true;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if(j == a[i]) continue;
    //         if(!mp.count(j)) 
    //         {
    //             cout << 0; is_found = false; break;
    //         }
    //     }
    //     if(is_found) cout << 1;
    // }
    for (int i = 0; i < m; i++)
    {
        if(mp.count(a[i]))
        {
            if(n == mp.size()) cout << 1;
            else cout << 0;
        }
        else
        {
            if(n-1 == mp.size()) cout << 1;
            else cout << 0;
        }
    }
    
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}