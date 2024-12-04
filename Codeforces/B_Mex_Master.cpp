#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); 
    int zero = 0, nonzero = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] == 0 ? zero++ : nonzero++;
        mx = max(mx, v[i]);
    }
    
    if(zero == 0 || nonzero >= zero - 1) 
    {
        cout << 0 << nl; return;
    }
    cout << ((mx != 1)? 1 : 2) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}