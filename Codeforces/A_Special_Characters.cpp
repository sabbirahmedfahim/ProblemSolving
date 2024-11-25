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
    if(n%2) cout << "NO" << nl;
    else 
    {
        cout << "YES" << nl;
        for (int i = 0; i < n/2; i++)
        {
            if(i%2==0) cout << "AA";
            else cout << "BB";
        }
        cout << nl;
    }
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}