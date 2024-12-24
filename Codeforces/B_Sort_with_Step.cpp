// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; vector<int> v(n+1); 
    for (int i = 1; i <= n; i++) cin >> v[i];
    
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
       if(i%k != v[i]%k) cnt++; // interesting lesson. if i%k == v[i]%k AKA they are in same group then only we can swap them
    }
    if(cnt == 0) cout << 0 << nl;
    else if(cnt <= 2) cout << 1 << nl;
    else cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i=1;i<=t;i++)
    {
        // cout << "test case: " << i << nl; 
        solve();
    }
    

    return 0;
}