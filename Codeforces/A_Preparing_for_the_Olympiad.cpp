#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n), b(n); 
    for(auto &data : a) cin >> data; for(auto &data : b) cin >> data;
    int monocarp = 0, stereocarp = 0;
    for (int i = 0; i < n; i++)
    {
        if(i == n-1)
        {
            monocarp += a[i]; continue;
        }
        if(a[i] > b[i+1])
        {
            monocarp += a[i];
            stereocarp += b[i+1];
        }
    }
    cout << monocarp - stereocarp << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}