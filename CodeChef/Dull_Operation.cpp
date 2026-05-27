#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >= 0; j--)
        {
            if(((i | j) * (i ^ j)) == n)
            {
                cout << i << " " << j << nl; return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}