#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i%2 == 0 && v[i]%2) odd++;
        else if(i%2 && v[i]%2 == 0) even++;
    }   
    
    cout << ((odd != even)? -1 : odd) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}